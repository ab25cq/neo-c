// C11 digraph / alternative-token preprocessing and punctuator coverage
%:include <stdio.h>
%:include <stdbool.h>

static bool g_ok = true;

%:define REQUIRE(expr) do <% \
    if (!(expr)) <% \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    %> \
%> while (0)

%:define CAT(a, b) a %:%: b

%:if 1
static int CAT(flag_, enabled) = 1;
%:else
static int CAT(flag_, enabled) = 0;
%:endif

static int CAT(g_val, 1) = 11;

int main(void)
<%
    int arr<:3:> = <% 1, 2, 3 %>;
    int mat<:2:><:2:> = <% <% 1, 2 %>, <% 3, 4 %> %>;

    REQUIRE(arr<:0:> == 1);
    REQUIRE(arr<:1:> == 2);
    REQUIRE(arr<:2:> == 3);

    REQUIRE(mat<:0:><:1:> == 2);
    REQUIRE(mat<:1:><:0:> == 3);
    REQUIRE(CAT(flag_, enabled) == 1);

    int CAT(local, 1) = 9;
    REQUIRE(g_val1 == 11);
    REQUIRE(local1 == 9);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
%>
