#include "c.h"

static char rcsid[] = "$Id$";

static List freenodes;		/* free list nodes */

/* append - append x to list, return new list */
List append(void *x, List list_) {
	List new_;

	if ((new_ = freenodes) != NULL)
		freenodes = freenodes->link;
	else
		NEW(new_, PERM);
	if (list_) {
		new_->link = list_->link;
		list_->link = new_;
	} else
		new_->link = new_;
	new_->x = x;
	return new_;
}

/* length - # elements in list */
int length(List list_) {
	int n = 0;

	if (list_) {
		List lp = list_;
		do
			n++;
		while ((lp = lp->link) != list_);
	}
	return n;
}

/* ltov - convert list to an NULL-terminated vector allocated in arena */
void *ltov(List *list_, unsigned arena) {
	int i = 0;
	void **array = newarray(length(*list_) + 1, sizeof array[0], arena);

	if (*list_) {
		List lp = *list_;
		do {
			lp = lp->link;
			array[i++] = lp->x;
		} while (lp != *list_);
#ifndef PURIFY
		lp = (*list_)->link;
		(*list_)->link = freenodes;
		freenodes = lp;
#endif
	}
	*list_ = NULL;
	array[i] = NULL;
	return array;
}
