# 1 "lib/libtcc1.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 418 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "lib/libtcc1.c" 2
# 34 "lib/libtcc1.c"
typedef int Wtype;
typedef unsigned int UWtype;
typedef unsigned int USItype;
typedef long long DWtype;
typedef unsigned long long UDWtype;

struct DWstruct {
    Wtype low, high;
};

typedef union
{
  struct DWstruct s;
  DWtype ll;
} DWunion;

typedef long double XFtype;
# 80 "lib/libtcc1.c"
union ldouble_long {
    long double ld;
    struct {
        unsigned long long lower;
        unsigned short upper;
    } l;
};

union double_long {
    double d;

    struct {
        unsigned int lower;
        int upper;
    } l;






    long long ll;
};

union float_long {
    float f;
    long l;
};
# 148 "lib/libtcc1.c"
static UDWtype __udivmoddi4 (UDWtype n, UDWtype d, UDWtype *rp)
{
  DWunion ww;
  DWunion nn, dd;
  DWunion rr;
  UWtype d0, d1, n0, n1, n2;
  UWtype q0, q1;
  UWtype b, bm;

  nn.ll = n;
  dd.ll = d;

  d0 = dd.s.low;
  d1 = dd.s.high;
  n0 = nn.s.low;
  n1 = nn.s.high;


  if (d1 == 0)
    {
      if (d0 > n1)
 {


   udiv_qrnnd (q0, n0, n1, n0, d0);
   q1 = 0;


 }
      else
 {


   if (d0 == 0)
     d0 = 1 / d0;

   udiv_qrnnd (q1, n1, 0, n1, d0);
   udiv_qrnnd (q0, n0, n1, n0, d0);


 }

      if (rp != 0)
 {
   rr.s.low = n0;
   rr.s.high = 0;
   *rp = rr.ll;
 }
    }
# 274 "lib/libtcc1.c"
  else
    {
      if (d1 > n1)
 {


   q0 = 0;
   q1 = 0;


   if (rp != 0)
     {
       rr.s.low = n0;
       rr.s.high = n1;
       *rp = rr.ll;
     }
 }
      else
 {


   count_leading_zeros (bm, d1);
   if (bm == 0)
     {
# 306 "lib/libtcc1.c"
       if (n1 > d1 || n0 >= d0)
  {
    q0 = 1;
    sub_ddmmss (n1, n0, n1, n0, d1, d0);
  }
       else
  q0 = 0;

       q1 = 0;

       if (rp != 0)
  {
    rr.s.low = n0;
    rr.s.high = n1;
    *rp = rr.ll;
  }
     }
   else
     {
       UWtype m1, m0;


       b = 32 - bm;

       d1 = (d1 << bm) | (d0 >> b);
       d0 = d0 << bm;
       n2 = n1 >> b;
       n1 = (n1 << bm) | (n0 >> b);
       n0 = n0 << bm;

       udiv_qrnnd (q0, n1, n2, n1, d1);
       umul_ppmm (m1, m0, q0, d0);

       if (m1 > n1 || (m1 == n1 && m0 > n0))
  {
    q0--;
    sub_ddmmss (m1, m0, m1, m0, d1, d0);
  }

       q1 = 0;


       if (rp != 0)
  {
    sub_ddmmss (n1, n0, n1, n0, m1, m0);
    rr.s.low = (n1 << b) | (n0 >> bm);
    rr.s.high = n1 >> bm;
    *rp = rr.ll;
  }
     }
 }
    }

  ww.s.low = q0;
  ww.s.high = q1;
  return ww.ll;
}



long long __divdi3(long long u, long long v)
{
    int c = 0;
    DWunion uu, vv;
    DWtype w;

    uu.ll = u;
    vv.ll = v;

    if (uu.s.high < 0) {
        c = ~c;
        uu.ll = (-(uu.ll));
    }
    if (vv.s.high < 0) {
        c = ~c;
        vv.ll = (-(vv.ll));
    }
    w = __udivmoddi4 (uu.ll, vv.ll, (UDWtype *) 0);
    if (c)
        w = (-(w));
    return w;
}

long long __moddi3(long long u, long long v)
{
    int c = 0;
    DWunion uu, vv;
    DWtype w;

    uu.ll = u;
    vv.ll = v;

    if (uu.s.high < 0) {
        c = ~c;
        uu.ll = (-(uu.ll));
    }
    if (vv.s.high < 0)
        vv.ll = (-(vv.ll));

    __udivmoddi4 (uu.ll, vv.ll, (UDWtype *) &w);
    if (c)
        w = (-(w));
    return w;
}

unsigned long long __udivdi3(unsigned long long u, unsigned long long v)
{
    return __udivmoddi4 (u, v, (UDWtype *) 0);
}

unsigned long long __umoddi3(unsigned long long u, unsigned long long v)
{
    UDWtype w;

    __udivmoddi4 (u, v, &w);
    return w;
}


long long __ashrdi3(long long a, int b)
{
# 439 "lib/libtcc1.c"
    return a >> b;

}


unsigned long long __lshrdi3(unsigned long long a, int b)
{
# 458 "lib/libtcc1.c"
    return a >> b;

}


long long __ashldi3(long long a, int b)
{
# 477 "lib/libtcc1.c"
    return a << b;

}
# 491 "lib/libtcc1.c"
float __floatundisf(unsigned long long a)
{
    DWunion uu;
    XFtype r;

    uu.ll = a;
    if (uu.s.high >= 0) {
        return (float)uu.ll;
    } else {
        r = (XFtype)uu.ll;
        r += 18446744073709551616.0;
        return (float)r;
    }
}

double __floatundidf(unsigned long long a)
{
    DWunion uu;
    XFtype r;

    uu.ll = a;
    if (uu.s.high >= 0) {
        return (double)uu.ll;
    } else {
        r = (XFtype)uu.ll;
        r += 18446744073709551616.0;
        return (double)r;
    }
}

long double __floatundixf(unsigned long long a)
{
    DWunion uu;
    XFtype r;

    uu.ll = a;
    if (uu.s.high >= 0) {
        return (long double)uu.ll;
    } else {
        r = (XFtype)uu.ll;
        r += 18446744073709551616.0;
        return (long double)r;
    }
}

unsigned long long __fixunssfdi (float a1)
{
    register union float_long fl1;
    register int exp;
    register unsigned long l;

    fl1.f = a1;

    if (fl1.l == 0)
 return (0);

    exp = (((fl1.l) >> 23) & 0xFF) - 126 - 24;

    l = (((fl1.l) & 0x7FFFFF) | (1 << 23));
    if (exp >= 41)
 return (unsigned long long)-1;
    else if (exp >= 0)
        return (unsigned long long)l << exp;
    else if (exp >= -23)
        return l >> -exp;
    else
        return 0;
}

unsigned long long __fixunsdfdi (double a1)
{
    register union double_long dl1;
    register int exp;
    register unsigned long long l;

    dl1.d = a1;

    if (dl1.ll == 0)
 return (0);

    exp = (((dl1.l.upper) >> 20) & 0x7FF) - 1022 - 53;

    l = ((dl1.ll & (((long long)1 << 52)-1)) | ((long long)1 << 52));

    if (exp >= 12)
 return (unsigned long long)-1;
    else if (exp >= 0)
        return l << exp;
    else if (exp >= -52)
        return l >> -exp;
    else
        return 0;
}

unsigned long long __fixunsxfdi (long double a1)
{
    register union ldouble_long dl1;
    register int exp;
    register unsigned long long l;

    dl1.ld = a1;

    if (dl1.l.lower == 0 && dl1.l.upper == 0)
 return (0);

    exp = (dl1.l.upper & 0x7fff) - 16382 - 64;

    l = dl1.l.lower;

    if (exp > 0)
 return (unsigned long long)-1;
    else if (exp >= -63)
        return l >> -exp;
    else
        return 0;
}
