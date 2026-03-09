#include <neo-c.h>
#include <stdio.h>

int main(void)
{
    xassert("brace line matches", string("{").match("^{"));
    xassert("function line matches", string("abc{").match("^[a-zA-Z].*{$"));
    xassert("ignore case works", string("AbC").match("abc", true));
    xassert("escaped tab works", string("a\tb").match("a\\tb"));

    var space_groups = string("sp vin/12command.nc").scan("^sp[ \\t]+([A-Za-z0-9_./~:@%+=,-]+)$");
    xassert("space scan captured one group", space_groups.length() == 1);
    xassert("space scan captured path", space_groups.item(0, null).equals("vin/12command.nc"));

    var tab_groups = string("sp\tvin/12command.nc").scan("^sp[ \\t]+([A-Za-z0-9_./~:@%+=,-]+)$");
    xassert("tab scan captured one group", tab_groups.length() == 1);
    xassert("tab scan captured path", tab_groups.item(0, null).equals("vin/12command.nc"));

    var pair_groups = string("left=right").scan("^([a-z]+)=([a-z]+)$");
    xassert("pair scan captured two groups", pair_groups.length() == 2);
    xassert("pair left captured", pair_groups.item(0, null).equals("left"));
    xassert("pair right captured", pair_groups.item(1, null).equals("right"));

    puts("ok");

    return 0;
}
