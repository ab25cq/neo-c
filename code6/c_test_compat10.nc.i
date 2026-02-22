#line 1 "../code6/c_test_compat10.nc"
// C 標準ライブラリ機能テスト (10):
// - pthread によるスレッド生成と条件変数/ミューテックスの同期
// - 高度な数学関数 (fma/hypot/erf/tgamma/log1p/tanh) の組み合わせ評価

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"




























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
































































#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"























#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


































































#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"



#line 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 106 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"








#line 118 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"








#line 168 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 173 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 178 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


#line 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"






#line 212 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"











#line 224 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 230 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 236 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 238 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 247 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 249 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 251 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


#line 257 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 267 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 292 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 302 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"







#line 314 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"






#line 325 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 335 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 348 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"






#line 357 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

















#line 386 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 395 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 410 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"









#line 423 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 425 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 429 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 433 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 437 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 441 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


#line 446 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 450 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 454 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 458 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 470 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"














#line 491 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"
























































































#line 596 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"








































#line 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"



















#line 691 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 713 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 723 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 727 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 737 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 747 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 757 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 763 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 770 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 772 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 781 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 787 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 790 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 97 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 115 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 121 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 127 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 133 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 139 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 145 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 151 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 163 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 169 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 175 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 181 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 193 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 211 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 217 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 223 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 229 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 235 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 241 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 247 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 253 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 259 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 265 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 271 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 277 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 283 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 289 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 295 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 301 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 307 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 313 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 319 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 325 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 331 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 337 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 343 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 349 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 355 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 361 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 367 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 373 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 379 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 385 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 391 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 397 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 403 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 409 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 415 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 421 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 427 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 433 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 439 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 445 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 451 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 457 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 463 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 469 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 475 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 481 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 487 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 493 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 499 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 505 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 511 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 517 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 523 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 529 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 535 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 541 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 547 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 553 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 559 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 565 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 571 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 577 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 583 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 589 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 595 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 601 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 607 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 613 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 619 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 625 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 631 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 637 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 643 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 655 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 661 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 667 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 673 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 679 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 685 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 691 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 697 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 703 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 709 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 721 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 727 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 733 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 739 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 745 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 751 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 757 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 763 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 769 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 775 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 781 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 787 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 793 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 799 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 805 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 811 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 817 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 823 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 829 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 835 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 841 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 847 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 853 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 859 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 865 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 871 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 877 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 883 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 889 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 895 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 901 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 907 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 913 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 919 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 925 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 931 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 937 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 943 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 949 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 955 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 961 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 967 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 973 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 979 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 985 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 991 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 997 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 1003 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 1009 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 1015 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 1021 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"

#line 1027 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h"
#line 795 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 803 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"























#line 830 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


#line 836 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


#line 850 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 858 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"

#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"

#line 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"

#line 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"

#line 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"

#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"

#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"

#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h"
#line 861 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 863 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"







#line 872 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 880 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 888 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"






#line 899 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"









#line 911 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"







#line 921 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 929 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 937 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 945 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"








#line 954 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"






#line 962 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"





#line 970 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 1 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"









#line 12 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"




#line 21 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"

#line 27 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"

#line 149 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"

#line 157 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"


#line 161 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"






#line 169 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"


#line 174 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"


#line 177 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"

#line 179 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"

#line 289 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"






#line 296 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"



#line 303 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"

#line 305 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"





#line 312 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"



#line 317 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"

#line 319 "/Library/Developer/CommandLineTools/usr/lib/clang/17/include/ptrcheck.h"
#line 973 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"
#line 1026 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"


#line 1030 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 1038 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"




#line 1049 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"



#line 1053 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 1061 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 1067 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"







#line 1085 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"



#line 1091 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"



#line 1109 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"

#line 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"

#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"

#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"

#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"

#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"
#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 
#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
 







































































































 
#line 134 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
 
#line 141 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 154 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 161 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 168 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"



#line 174 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 181 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 183 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 189 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"



#line 193 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"






















 
#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"

#line 102 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"


#line 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"


#line 257 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"


#line 319 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"


#line 358 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"


#line 384 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"


#line 401 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"







#line 409 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"

#line 411 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"





#line 417 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"

#line 493 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"

#line 495 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"

#line 497 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"

#line 499 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"
#line 197 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"





























#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"






















 
#line 497 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"

#line 499 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityVersions.h"
#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"



#line 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 124 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"


#line 127 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 141 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 221 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 223 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 225 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 233 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"






#line 515 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"












 
#line 534 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"

#line 536 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"


#line 539 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"
#line 198 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"






























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"





























#line 536 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"


#line 539 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h"
#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"

#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"

#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"

#line 2828 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"

#line 4345 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternalLegacy.h"
#line 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 253 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"


#line 270 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"



#line 285 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 287 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"




#line 298 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 302 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 306 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 310 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"


#line 315 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"


#line 327 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 331 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 335 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 339 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 343 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"



#line 356 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 360 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 364 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 368 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 372 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"



#line 385 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 389 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 393 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 397 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 401 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"


#line 409 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 413 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 417 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"















#line 512 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"





#line 520 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 524 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 528 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 532 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 536 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 540 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 544 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 548 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 552 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 556 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 560 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 564 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 568 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 572 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 576 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 580 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 584 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 588 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"





#line 596 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 600 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 604 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 608 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 612 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 614 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 616 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"























#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"




























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"



#line 6 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

#line 8 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

#line 14 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

#line 21 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"






#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
typedef signed char           __int8_t;
#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
typedef unsigned char           __uint8_t;
typedef short                   __int16_t;
typedef unsigned short          __uint16_t;
typedef int                     __int32_t;
typedef unsigned int            __uint32_t;
typedef long long               __int64_t;
typedef unsigned long long      __uint64_t;

typedef long                    __darwin_intptr_t;
typedef unsigned int            __darwin_natural_t;



















typedef int                     __darwin_ct_rune_t;     





typedef union {
	char            __mbstate8[128];
	long long       _mbstateL;                      
} __mbstate_t;

typedef __mbstate_t             __darwin_mbstate_t;     

#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
typedef long        __darwin_ptrdiff_t;     
#line 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

#line 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
typedef unsigned long           __darwin_size_t;        
#line 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

#line 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
typedef __builtin_va_list       __darwin_va_list;       
#line 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

#line 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
typedef int          __darwin_wchar_t;       
#line 107 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

typedef __darwin_wchar_t        __darwin_rune_t;        

#line 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
typedef unsigned int           __darwin_wint_t;        
#line 115 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

typedef unsigned long           __darwin_clock_t;       
typedef __uint32_t              __darwin_socklen_t;     
typedef long                    __darwin_ssize_t;       
typedef long                    __darwin_time_t;        

#line 122 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"

#line 124 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"
#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"
#line 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"
#line 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"

#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"

#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"







#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"

typedef __int64_t       __darwin_blkcnt_t;      
typedef __int32_t       __darwin_blksize_t;     
typedef __int32_t       __darwin_dev_t;         
typedef unsigned int    __darwin_fsblkcnt_t;    
typedef unsigned int    __darwin_fsfilcnt_t;    
typedef __uint32_t      __darwin_gid_t;         
typedef __uint32_t      __darwin_id_t;          
typedef __uint64_t      __darwin_ino64_t;       
#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"
typedef __darwin_ino64_t __darwin_ino_t;        
#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"
typedef __darwin_natural_t __darwin_mach_port_name_t; 
typedef __darwin_mach_port_name_t __darwin_mach_port_t; 
typedef __uint16_t      __darwin_mode_t;        
typedef __int64_t       __darwin_off_t;         
typedef __int32_t       __darwin_pid_t;         
typedef __uint32_t      __darwin_sigset_t;      
typedef __int32_t       __darwin_suseconds_t;   
typedef __uint32_t      __darwin_uid_t;         
typedef __uint32_t      __darwin_useconds_t;    
typedef unsigned char   __darwin_uuid_t[16];
typedef char    __darwin_uuid_string_t[37];

#line 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"




























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"


#line 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"

struct __darwin_pthread_handler_rec {
	void (*__routine)(void *);	
	void *__arg;			
	struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
	long __sig;
	char __opaque[56];
};

struct _opaque_pthread_cond_t {
	long __sig;
	char __opaque[40];
};

struct _opaque_pthread_condattr_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_mutex_t {
	long __sig;
	char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_once_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
	long __sig;
	char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
	long __sig;
	char __opaque[16];
};

struct _opaque_pthread_t {
	long __sig;
	struct __darwin_pthread_handler_rec  *__cleanup_stack;
	char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
#line 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"

#line 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"

#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"



#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"

typedef	int		__darwin_nl_item;
typedef	int		__darwin_wctrans_t;
#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"
typedef	__uint32_t	__darwin_wctype_t;
#line 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"

#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"

#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"

#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"
#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"



#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h"




























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h"

#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"






























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"









































#line 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

#line 47 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/_types.h"


#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"




#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h"
typedef signed char           int8_t;
#line 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h"
typedef short                   int16_t;
#line 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h"
typedef int                     int32_t;
#line 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h"
typedef long long               int64_t;
#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int8_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int8_t.h"
typedef unsigned char           u_int8_t;
#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int16_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int16_t.h"
typedef unsigned short                  u_int16_t;
#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int32_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int32_t.h"
typedef unsigned int            u_int32_t;
#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int64_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int64_t.h"
typedef unsigned long long      u_int64_t;
#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
typedef int64_t                 register_t;
#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h"

typedef __darwin_intptr_t       intptr_t;
#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h"

#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h"
typedef unsigned long           uintptr_t;
#line 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h"
#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"

#line 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
typedef u_int64_t               user_addr_t;
typedef u_int64_t               user_size_t;
typedef int64_t                 user_ssize_t;
typedef int64_t                 user_long_t;
typedef u_int64_t               user_ulong_t;
typedef int64_t                 user_time_t;
typedef int64_t                 user_off_t;
#line 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"


#line 97 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"


#line 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"


#line 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
typedef u_int64_t               syscall_arg_t;
#line 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/arm/types.h"
#line 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"
#line 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"
#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h"
typedef __darwin_va_list va_list;
#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h"

#line 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h"
#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"



























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h"


























#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"
typedef __darwin_size_t        size_t;
#line 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"



























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"
#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"
#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"




























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"

#line 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 
#line 614 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 616 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"



int     renameat(int, const char *, int, const char *) ;

#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"

int renamex_np(const char *, const char *, unsigned int)    ;
int renameatx_np(int, const char *, int, const char *, unsigned int)    ;

#line 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"



#line 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h"
#line 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_printf.h"























#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_printf.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_printf.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_printf.h"





int	 printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));


#line 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"



typedef __darwin_off_t		fpos_t;

#line 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"








struct __sbuf {
	unsigned char *	_base;
	int		_size;
};


struct __sFILEX;



























typedef	struct __sFILE {
	unsigned char *	_p;	
	int	_r;		
	int	_w;		
	short	_flags;		
	short	_file;		
	struct	__sbuf _bf;	
	int	_lbfsize;	

	
	void	*_cookie;	
	int	(*  _close)(void *);
	int	(*  _read) (void *, char *, int __n);
	fpos_t	(*  _seek) (void *, fpos_t, int);
	int	(*  _write)(void *, const char *, int __n);

	
	struct	__sbuf _ub;	
	struct __sFILEX *_extra; 
	int	_ur;		

	
	unsigned char _ubuf[3];	
	unsigned char _nbuf[1];	

	
	struct	__sbuf _lb;	

	
	int	_blksize;	
	fpos_t	_offset;	
} FILE;

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"




























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"


#line 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"

#line 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"

#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_seek_set.h"
#line 165 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


extern FILE *__stdinp ;
extern FILE *__stdoutp ;
extern FILE *__stderrp ;


#line 176 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
	
#line 189 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"










#line 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

				
#line 209 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


#line 216 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 220 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"




void	 clearerr(FILE *);
int	 fclose(FILE *);
int	 feof(FILE *);
int	 ferror(FILE *);
int	 fflush(FILE *);
int	 fgetc(FILE *);
int	 fgetpos(FILE * restrict, fpos_t *);
char *	fgets(char * restrict , int __size, FILE *);
#line 241 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
FILE	*fopen(const char * restrict __filename, const char * restrict __mode) __asm("_" "fopen" "$DARWIN_EXTSN");
#line 245 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
int	 fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int	 fputc(int, FILE *);
int	 fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t	 fread(void * restrict  __ptr, size_t __size, size_t __nitems, FILE * restrict __stream);
FILE	*freopen(const char * restrict, const char * restrict,
				 FILE * restrict) __asm("_" "freopen" );
int	 fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int	 fseek(FILE *, long, int);
int	 fsetpos(FILE *, const fpos_t *);
long	 ftell(FILE *);
size_t	 fwrite(const void * restrict  __ptr, size_t __size, size_t __nitems, FILE * restrict __stream) __asm("_" "fwrite" );
int	 getc(FILE *);
int	 getchar(void);

#line 262 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
char *	gets(char *) ;

void	 perror(const char *) ;
int	 putc(int, FILE *);
int	 putchar(int);
int	 puts(const char *);
int	 remove(const char *);
int	 rename (const char *__old, const char *__new);
void	 rewind(FILE *);
int	 scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void	 setbuf(FILE * restrict, char * restrict );
int	 setvbuf(FILE * restrict, char * restrict , int, size_t __size);



#line 280 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
int	 sprintf(char * restrict , const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) ;

int	 sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE	*tmpfile(void);


#line 289 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
char *	tmpnam(char *);

int	 ungetc(int, FILE *);
int	 vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int	 vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));



#line 300 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
int	 vsprintf(char * restrict , const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) ;








#line 310 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 314 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h"























#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h"

#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h"





char *	ctermid(char *);


#line 316 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"



#line 320 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
FILE	*fdopen(int, const char *) __asm("_" "fdopen" "$DARWIN_EXTSN");
#line 324 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
int	 fileno(FILE *);

#line 327 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"






#line 334 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

int	 pclose(FILE *) ;
#line 337 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
FILE	*popen(const char *, const char *) __asm("_" "popen" "$DARWIN_EXTSN") ;
#line 341 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 343 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"







#line 351 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"



int	__srget(FILE *);
int	__svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int	__swbuf(int, FILE *);






#line 365 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
	if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
		return (*_p->_p++ = _c);
	else
		return (__swbuf(_c, _p));
}
#line 377 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 382 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


void	 flockfile(FILE *);
int	 ftrylockfile(FILE *);
void	 funlockfile(FILE *);
int	 getc_unlocked(FILE *);
int	 getchar_unlocked(void);
int	 putc_unlocked(int, FILE *);
int	 putchar_unlocked(int);


#line 397 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


#line 402 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
char *	tempnam(const char *__dir, const char *__prefix) __asm("_" "tempnam" );


#line 409 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 413 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"








#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h"
typedef __darwin_off_t          off_t;
#line 423 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


int	 fseeko(FILE * __stream, off_t __offset, int __whence);
off_t	 ftello(FILE * __stream);

#line 429 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 431 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

int	 snprintf(char * restrict  __str, size_t __size, const char * restrict __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int	 vfscanf(FILE * restrict __stream, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int	 vscanf(const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int	 vsnprintf(char * restrict  __str, size_t __size, const char * restrict __format, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int	 vsscanf(const char * restrict __str, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));

#line 439 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"







#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h"
typedef __darwin_ssize_t        ssize_t;
#line 448 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


int	dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int	vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) ;
ssize_t getdelim(char * *restrict __linep, size_t * restrict __linecapp, int __delimiter, FILE * restrict __stream) ;
ssize_t getline(char * *restrict __linep, size_t * restrict __linecapp, FILE * restrict __stream) ;
FILE *fmemopen(void * restrict __buf , size_t __size, const char * restrict __mode) ;
FILE *open_memstream(char * *__bufp, size_t *__sizep) ;

#line 458 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"





#line 464 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

extern const int sys_nerr;		
extern const char *const sys_errlist[];

int	 asprintf(char * *restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *	ctermid_r(char *);
char *	fgetln(FILE *, size_t *__len);
const char *fmtcheck(const char *, const char *) __attribute__((format_arg(2)));
int	 fpurge(FILE *);
void	 setbuffer(FILE *, char *, int __size);
int	 setlinebuf(FILE *);
int	 vasprintf(char * *restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));





FILE	*funopen(const void *,
				 int (* )(void *, char *, int __n),
				 int (* )(void *, const char *, int __n),
				 fpos_t (* )(void *, fpos_t, int),
				 int (* )(void *));

#line 489 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 494 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 496 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"


#line 499 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"























#line 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h"























#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h"

#line 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h"

#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h"
#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"



#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

extern int __snprintf_chk (char * restrict , size_t __maxlen, int, size_t,
			  const char * restrict, ...);
extern int __vsnprintf_chk (char * restrict , size_t __maxlen, int, size_t,
			  const char * restrict, va_list);

extern int __sprintf_chk (char * restrict , int, size_t,
			  const char * restrict, ...);
extern int __vsprintf_chk (char * restrict , int, size_t,
			  const char * restrict, va_list);

#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"


#line 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"


#line 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"



#line 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 106 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"

#line 118 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h"
#line 501 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 502 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h"
#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h"
#line 6 "../code6/c_test_compat10.nc"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks/Kernel.framework/Headers/stdbool.h"
/*
 * Copyright (c) 2000 Jeroen Ruigrok van der Werven <asmodai@FreeBSD.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD: src/include/stdbool.h,v 1.6 2002/08/16 07:33:14 alfred Exp $
 */

#line 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks/Kernel.framework/Headers/stdbool.h"

#line 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks/Kernel.framework/Headers/stdbool.h"

#line 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks/Kernel.framework/Headers/stdbool.h"

#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks/Kernel.framework/Headers/stdbool.h"

#line 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks/Kernel.framework/Headers/stdbool.h"

#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks/Kernel.framework/Headers/stdbool.h"

#line 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks/Kernel.framework/Headers/stdbool.h"

#line 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks/Kernel.framework/Headers/stdbool.h"
#line 7 "../code6/c_test_compat10.nc"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"



















































#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/sched.h"























#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/sched.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/sched.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/pthread_impl.h"























#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/pthread_impl.h"






#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/pthread_impl.h"

#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/pthread_impl.h"




#line 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/pthread_impl.h"

#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/pthread_impl.h"

#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/pthread_impl.h"




#line 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/pthread_impl.h"

#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/pthread_impl.h"

#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/pthread_impl.h"

#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/pthread_impl.h"
#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/sched.h"





#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/sched.h"
struct sched_param { int sched_priority;  char __opaque[4]; };
#line 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/sched.h"

extern int sched_yield(void);
extern int sched_get_priority_min(int);
extern int sched_get_priority_max(int);


#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/sched.h"
#line 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/time.h"






























































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"






























































#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h"






















#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_bounds.h"






















#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 
#line 614 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 616 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_clock_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_clock_t.h"
typedef __darwin_clock_t        clock_t;
#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"



























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"

#line 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h"
#line 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"



























#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 54 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h"

#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_time_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_time_t.h"
typedef __darwin_time_t         time_t;
#line 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h"



























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h"





























#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h"

struct timespec
{
	__darwin_time_t tv_sec;
	long            tv_nsec;
};
#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"



struct tm {
	int	tm_sec;		
	int	tm_min;		
	int	tm_hour;	
	int	tm_mday;	
	int	tm_mon;		
	int	tm_year;	
	int	tm_wday;	
	int	tm_yday;	
	int	tm_isdst;	
	long	tm_gmtoff;	
	char	*	tm_zone;	
};

#line 99 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

#line 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
extern char *	tzname[];
#line 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

extern int getdate_err;
#line 106 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
extern long timezone __asm("_" "timezone" );
#line 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
extern int daylight;


char *	asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *	ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * restrict, size_t __maxsize, const char * restrict, const struct tm * restrict) __asm("_" "strftime" );
char *	strptime(const char * restrict, const char * restrict, struct tm * restrict) __asm("_" "strptime" );
time_t time(time_t *);

#line 124 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
void tzset(void);
#line 126 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"


char * asctime_r(const struct tm * restrict, char * restrict );
char * ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * restrict, struct tm * restrict);
struct tm *localtime_r(const time_t * restrict, struct tm * restrict);

#line 134 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
time_t posix2time(time_t);
#line 138 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);
#line 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

#line 145 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
int nanosleep(const struct timespec *__rqtp, struct timespec *__rmtp) __asm("_" "nanosleep"  );
#line 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

#line 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

typedef enum {
_CLOCK_REALTIME  = 0,
#line 159 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
_CLOCK_MONOTONIC  = 6,
#line 162 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
_CLOCK_MONOTONIC_RAW  = 4,
#line 164 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
_CLOCK_MONOTONIC_RAW_APPROX  = 5,
#line 166 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
_CLOCK_UPTIME_RAW  = 8,
#line 168 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
_CLOCK_UPTIME_RAW_APPROX  = 9,
#line 171 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
_CLOCK_PROCESS_CPUTIME_ID  = 12,
#line 173 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
_CLOCK_THREAD_CPUTIME_ID  = 16
#line 175 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"
} clockid_t;


int clock_getres(clockid_t __clock_id, struct timespec *__res);


int clock_gettime(clockid_t __clock_id, struct timespec *__tp);

#line 184 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

__uint64_t clock_gettime_nsec_np(clockid_t __clock_id);
#line 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

 
 
int clock_settime(clockid_t __clock_id, const struct timespec *__tp);

#line 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

#line 197 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

#line 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"

int timespec_get(struct timespec *ts, int base);
#line 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_time.h"


#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/time.h"
#line 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_attr_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_attr_t.h"
typedef __darwin_pthread_attr_t pthread_attr_t;
#line 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_cond_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_cond_t.h"
typedef __darwin_pthread_cond_t pthread_cond_t;
#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h"
typedef __darwin_pthread_condattr_t pthread_condattr_t;
#line 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_key_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_key_t.h"
typedef __darwin_pthread_key_t pthread_key_t;
#line 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h"
typedef __darwin_pthread_mutex_t pthread_mutex_t;
#line 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h"
typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;
#line 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_once_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_once_t.h"
typedef __darwin_pthread_once_t pthread_once_t;
#line 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h"
typedef __darwin_pthread_rwlock_t pthread_rwlock_t;
#line 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h"
typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;
#line 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_t.h"
typedef __darwin_pthread_t pthread_t;
#line 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"























#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_attr_t.h"


























#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_t.h"


























#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 
#line 614 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 616 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"

#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/qos.h"























#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/qos.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/qos.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 
#line 614 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 616 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/qos.h"





















































































#line 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/qos.h"

#line 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/qos.h"

enum { QOS_CLASS_USER_INTERACTIVE
			 = 0x21,QOS_CLASS_USER_INITIATED
			 = 0x19,QOS_CLASS_DEFAULT
			 = 0x15,QOS_CLASS_UTILITY
			 = 0x11,QOS_CLASS_BACKGROUND
			 = 0x09,QOS_CLASS_UNSPECIFIED
			 = 0x00, }; typedef unsigned int qos_class_t;
#line 144 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/qos.h"

#line 146 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/qos.h"







#line 154 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/qos.h"



#line 158 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/qos.h"













qos_class_t
qos_class_self(void);




















qos_class_t
qos_class_main(void);



#line 199 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/qos.h"
#line 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"

#line 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"

#line 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"









































int
pthread_attr_set_qos_class_np(pthread_attr_t *__attr,
		qos_class_t __qos_class, int __relative_priority);




























int
pthread_attr_get_qos_class_np(pthread_attr_t * restrict __attr,
		qos_class_t *  restrict __qos_class,
		int *  restrict __relative_priority);





































int
pthread_set_qos_class_self_np(qos_class_t __qos_class,
		int __relative_priority);




























int
pthread_get_qos_class_np(pthread_t __pthread,
		qos_class_t *  restrict __qos_class,
		int *  restrict __relative_priority);






















typedef struct pthread_override_s* pthread_override_t;




















































pthread_override_t
pthread_override_qos_class_start_np(pthread_t __pthread,
		qos_class_t __qos_class, int __relative_priority);

























int
pthread_override_qos_class_end_np(pthread_override_t __override);


#line 299 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"

#line 301 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"

#line 303 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread/qos.h"
#line 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"

#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mach_port_t.h"














































#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_mach_port_t.h"
typedef __darwin_mach_port_t mach_port_t;
#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigset_t.h"



























#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h"



























#line 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigset_t.h"
typedef __darwin_sigset_t               sigset_t;
#line 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"

#line 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"





















#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 
#line 614 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 616 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"

#line 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"











#line 117 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"

#line 119 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"





#line 126 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"

#line 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"

#line 134 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"


#line 137 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"


#line 141 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"

#line 144 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"




#line 151 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"




#line 159 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"




#line 165 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"




#line 170 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"




#line 175 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"


#line 183 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"


#line 186 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"

#line 192 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"









#line 202 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"





#line 208 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"





int pthread_atfork(void (* )(void), void (* )(void),
		void (* )(void));


int pthread_attr_destroy(pthread_attr_t *);


int pthread_attr_getdetachstate(const pthread_attr_t *, int *);


int pthread_attr_getguardsize(const pthread_attr_t * restrict, size_t * restrict);


int pthread_attr_getinheritsched(const pthread_attr_t * restrict, int * restrict);


int pthread_attr_getschedparam(const pthread_attr_t * restrict,
		struct sched_param * restrict);


int pthread_attr_getschedpolicy(const pthread_attr_t * restrict, int * restrict);


int pthread_attr_getscope(const pthread_attr_t * restrict, int * restrict);


int pthread_attr_getstack(const pthread_attr_t * restrict,
		void *  *  restrict, size_t * restrict);


int pthread_attr_getstackaddr(const pthread_attr_t * restrict,
		void *  *  restrict);


int pthread_attr_getstacksize(const pthread_attr_t * restrict, size_t * restrict);


int pthread_attr_init(pthread_attr_t *);


int pthread_attr_setdetachstate(pthread_attr_t *, int);


int pthread_attr_setguardsize(pthread_attr_t *, size_t);


int pthread_attr_setinheritsched(pthread_attr_t *, int);


int pthread_attr_setschedparam(pthread_attr_t * restrict,
		const struct sched_param * restrict);


int pthread_attr_setschedpolicy(pthread_attr_t *, int);


int pthread_attr_setscope(pthread_attr_t *, int);


int pthread_attr_setstack(pthread_attr_t *, void *, size_t);


int pthread_attr_setstackaddr(pthread_attr_t *, void *);


int pthread_attr_setstacksize(pthread_attr_t *, size_t);


int pthread_cancel(pthread_t) __asm("_" "pthread_cancel" );


int pthread_cond_broadcast(pthread_cond_t *);


int pthread_cond_destroy(pthread_cond_t *);


int pthread_cond_init(
		pthread_cond_t * restrict,
		const pthread_condattr_t *  restrict)
		__asm("_" "pthread_cond_init" );


int pthread_cond_signal(pthread_cond_t *);



int pthread_cond_timedwait(
		pthread_cond_t * restrict, pthread_mutex_t * restrict,
		const struct timespec *  restrict)
		__asm("_" "pthread_cond_timedwait"  );



int pthread_cond_wait(pthread_cond_t * restrict,
		pthread_mutex_t * restrict) __asm("_" "pthread_cond_wait"  );


int pthread_condattr_destroy(pthread_condattr_t *);


int pthread_condattr_init(pthread_condattr_t *);


int pthread_condattr_getpshared(const pthread_condattr_t * restrict,
		int * restrict);


int pthread_condattr_setpshared(pthread_condattr_t *, int);


#line 325 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
int pthread_create(pthread_t  *  restrict,
		const pthread_attr_t *  restrict,
		void *  (* )(void * ),
		void *  restrict);
#line 334 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"


int pthread_detach(pthread_t);


int pthread_equal(pthread_t , pthread_t );



void pthread_exit(void * ) __attribute__((__noreturn__));


int pthread_getconcurrency(void);


int pthread_getschedparam(pthread_t , int *  restrict,
		struct sched_param *  restrict);



void*  pthread_getspecific(pthread_key_t);



int pthread_join(pthread_t , void *  * )
		__asm("_" "pthread_join"  );


int pthread_key_create(pthread_key_t *, void (* )(void *));


int pthread_key_delete(pthread_key_t);


int pthread_mutex_destroy(pthread_mutex_t *);


int pthread_mutex_getprioceiling(const pthread_mutex_t * restrict,
		int * restrict);


int pthread_mutex_init(pthread_mutex_t * restrict,
		const pthread_mutexattr_t *  restrict);



int pthread_mutex_lock(pthread_mutex_t *);


int pthread_mutex_setprioceiling(pthread_mutex_t * restrict, int,
		int * restrict);



int pthread_mutex_trylock(pthread_mutex_t *);



int pthread_mutex_unlock(pthread_mutex_t *);


int pthread_mutexattr_destroy(pthread_mutexattr_t *) __asm("_" "pthread_mutexattr_destroy" );


int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t * restrict,
		int * restrict);


int pthread_mutexattr_getprotocol(const pthread_mutexattr_t * restrict,
		int * restrict);


int pthread_mutexattr_getpshared(const pthread_mutexattr_t * restrict,
		int * restrict);


int pthread_mutexattr_gettype(const pthread_mutexattr_t * restrict,
		int * restrict);


int pthread_mutexattr_getpolicy_np(const pthread_mutexattr_t * restrict,
		int * restrict);


int pthread_mutexattr_init(pthread_mutexattr_t *);


int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *, int);


int pthread_mutexattr_setprotocol(pthread_mutexattr_t *, int);


int pthread_mutexattr_setpshared(pthread_mutexattr_t *, int);


int pthread_mutexattr_settype(pthread_mutexattr_t *, int);


int pthread_mutexattr_setpolicy_np(pthread_mutexattr_t *, int);



int pthread_once(pthread_once_t *, void (* )(void));


int pthread_rwlock_destroy(pthread_rwlock_t * ) __asm("_" "pthread_rwlock_destroy" );


int pthread_rwlock_init(pthread_rwlock_t * restrict,
		const pthread_rwlockattr_t *  restrict)
		__asm("_" "pthread_rwlock_init" );



int pthread_rwlock_rdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_rdlock" );



int pthread_rwlock_tryrdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_tryrdlock" );



int pthread_rwlock_trywrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_trywrlock" );



int pthread_rwlock_wrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_wrlock" );



int pthread_rwlock_unlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_unlock" );


int pthread_rwlockattr_destroy(pthread_rwlockattr_t *);


int pthread_rwlockattr_getpshared(const pthread_rwlockattr_t * restrict,
		int * restrict);


int pthread_rwlockattr_init(pthread_rwlockattr_t *);


int pthread_rwlockattr_setpshared(pthread_rwlockattr_t *, int);


pthread_t pthread_self(void);



int pthread_setcancelstate(int , int * )
		__asm("_" "pthread_setcancelstate" );



int pthread_setcanceltype(int , int * )
		__asm("_" "pthread_setcanceltype" );


int pthread_setconcurrency(int);


int pthread_setschedparam(pthread_t, int, const struct sched_param *);



int pthread_setspecific(pthread_key_t , const void * );



void pthread_testcancel(void) __asm("_" "pthread_testcancel" );

#line 508 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"



int pthread_is_threaded_np(void);


int pthread_threadid_np(pthread_t ,__uint64_t* );



int	pthread_getname_np(pthread_t,char*,size_t);



int	pthread_setname_np(const char*);



int	pthread_main_np(void);



mach_port_t pthread_mach_thread_np(pthread_t);


size_t pthread_get_stacksize_np(pthread_t);


void* pthread_get_stackaddr_np(pthread_t);



int pthread_cond_signal_thread_np(pthread_cond_t *, pthread_t );




int pthread_cond_timedwait_relative_np(pthread_cond_t *, pthread_mutex_t *,
		const struct timespec * );



#line 551 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
int pthread_create_suspended_np(
		pthread_t  * , const pthread_attr_t * ,
		void *  (* )(void * ), void * );
#line 558 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"


int pthread_kill(pthread_t, int);


 pthread_t pthread_from_mach_thread_np(mach_port_t);


int pthread_sigmask(int, const sigset_t * , sigset_t * )
		__asm("_" "pthread_sigmask" );



void pthread_yield_np(void);



void pthread_jit_write_protect_np(int enabled);



int pthread_jit_write_protect_supported_np(void);















typedef int (*pthread_jit_write_callback_t)(void *  ctx);











#line 610 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"






































































int pthread_jit_write_with_callback_np(
		pthread_jit_write_callback_t  callback, void *  ctx);




























void pthread_jit_write_freeze_callbacks_np(void);

















int
pthread_cpu_number_np(size_t *cpu_number_out);

#line 732 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"

#line 736 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/pthread.h"
#line 8 "../code6/c_test_compat10.nc"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"























#line 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h"

































































#line 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"
#line 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"






















 
#line 614 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"

#line 616 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h"
#line 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"











#line 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"
    typedef float float_t;
    typedef double double_t;
#line 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"





#line 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 88 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"


#line 107 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"


#line 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"


#line 115 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 117 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"
extern int __math_errhandling(void);














#line 133 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"






#line 141 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);

#line 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"












    
#line 162 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 164 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 166 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 168 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 171 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float);
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double);
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double);
inline __attribute__ ((__always_inline__)) int __inline_isinff(float);
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double);
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnand(double);
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double);
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double);
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float);
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double);
inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double);
    
inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float __x) {
    return __x == __x && __builtin_fabsf(__x) != __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double __x) {
    return __x == __x && __builtin_fabs(__x) != __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double __x) {
    return __x == __x && __builtin_fabsl(__x) != __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isinff(float __x) {
    return __builtin_fabsf(__x) == __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double __x) {
    return __builtin_fabs(__x) == __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double __x) {
    return __builtin_fabsl(__x) == __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnand(double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float __x) {
    union { float __f; unsigned int __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 31);
}
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double __x) {
    union { double __f; unsigned long long __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}
#line 235 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"
inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double __x) {
    union { long double __f; unsigned long long __u;} __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}
#line 241 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"
inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float __x) {
    return __inline_isfinitef(__x) && __builtin_fabsf(__x) >= 1.17549435e-38F;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double __x) {
    return __inline_isfinited(__x) && __builtin_fabs(__x) >= 2.2250738585072014e-308;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double __x) {
    return __inline_isfinitel(__x) && __builtin_fabsl(__x) >= 3.36210314311209350626e-4932L;
}
    
#line 292 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"






    
extern float acosf(float);
extern double acos(double);
extern long double acosl(long double);
    
extern float asinf(float);
extern double asin(double);
extern long double asinl(long double);
    
extern float atanf(float);
extern double atan(double);
extern long double atanl(long double);
    
extern float atan2f(float, float);
extern double atan2(double, double);
extern long double atan2l(long double, long double);
    
extern float cosf(float);
extern double cos(double);
extern long double cosl(long double);
    
extern float sinf(float);
extern double sin(double);
extern long double sinl(long double);
    
extern float tanf(float);
extern double tan(double);
extern long double tanl(long double);
    
extern float acoshf(float);
extern double acosh(double);
extern long double acoshl(long double);
    
extern float asinhf(float);
extern double asinh(double);
extern long double asinhl(long double);
    
extern float atanhf(float);
extern double atanh(double);
extern long double atanhl(long double);
    
extern float coshf(float);
extern double cosh(double);
extern long double coshl(long double);
    
extern float sinhf(float);
extern double sinh(double);
extern long double sinhl(long double);
    
extern float tanhf(float);
extern double tanh(double);
extern long double tanhl(long double);
    
extern float expf(float);
extern double exp(double);
extern long double expl(long double);

extern float exp2f(float);
extern double exp2(double); 
extern long double exp2l(long double); 

extern float expm1f(float);
extern double expm1(double); 
extern long double expm1l(long double); 

extern float logf(float);
extern double log(double);
extern long double logl(long double);

extern float log10f(float);
extern double log10(double);
extern long double log10l(long double);

extern float log2f(float);
extern double log2(double);
extern long double log2l(long double);

extern float log1pf(float);
extern double log1p(double);
extern long double log1pl(long double);

extern float logbf(float);
extern double logb(double);
extern long double logbl(long double);

extern float modff(float, float *);
extern double modf(double, double *);
extern long double modfl(long double, long double *);

extern float ldexpf(float, int);
extern double ldexp(double, int);
extern long double ldexpl(long double, int);

extern float frexpf(float, int *);
extern double frexp(double, int *);
extern long double frexpl(long double, int *);

extern int ilogbf(float);
extern int ilogb(double);
extern int ilogbl(long double);

extern float scalbnf(float, int);
extern double scalbn(double, int);
extern long double scalbnl(long double, int);

extern float scalblnf(float, long int);
extern double scalbln(double, long int);
extern long double scalblnl(long double, long int);

extern float fabsf(float);
extern double fabs(double);
extern long double fabsl(long double);

extern float cbrtf(float);
extern double cbrt(double);
extern long double cbrtl(long double);

extern float hypotf(float, float);
extern double hypot(double, double);
extern long double hypotl(long double, long double);

extern float powf(float, float);
extern double pow(double, double);
extern long double powl(long double, long double);

extern float sqrtf(float);
extern double sqrt(double);
extern long double sqrtl(long double);

extern float erff(float);
extern double erf(double);
extern long double erfl(long double);

extern float erfcf(float);
extern double erfc(double);
extern long double erfcl(long double);




extern float lgammaf(float);
extern double lgamma(double);
extern long double lgammal(long double);

extern float tgammaf(float);
extern double tgamma(double);
extern long double tgammal(long double);

extern float ceilf(float);
extern double ceil(double);
extern long double ceill(long double);

extern float floorf(float);
extern double floor(double);
extern long double floorl(long double);

extern float nearbyintf(float);
extern double nearbyint(double);
extern long double nearbyintl(long double);

extern float rintf(float);
extern double rint(double);
extern long double rintl(long double);

extern long int lrintf(float);
extern long int lrint(double);
extern long int lrintl(long double);

extern float roundf(float);
extern double round(double);
extern long double roundl(long double);

extern long int lroundf(float);
extern long int lround(double);
extern long int lroundl(long double);
    


#line 477 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"
extern long long int llrintf(float);
extern long long int llrint(double);
extern long long int llrintl(long double);

extern long long int llroundf(float);
extern long long int llround(double);
extern long long int llroundl(long double);
#line 485 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

extern float truncf(float);
extern double trunc(double);
extern long double truncl(long double);

extern float fmodf(float, float);
extern double fmod(double, double);
extern long double fmodl(long double, long double);

extern float remainderf(float, float);
extern double remainder(double, double);
extern long double remainderl(long double, long double);

extern float remquof(float, float, int *);
extern double remquo(double, double, int *);
extern long double remquol(long double, long double, int *);

extern float copysignf(float, float);
extern double copysign(double, double);
extern long double copysignl(long double, long double);

extern float nanf(const char *);
extern double nan(const char *);
extern long double nanl(const char *);

extern float nextafterf(float, float);
extern double nextafter(double, double);
extern long double nextafterl(long double, long double);

extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);

extern float fdimf(float, float);
extern double fdim(double, double);
extern long double fdiml(long double, long double);

extern float fmaxf(float, float);
extern double fmax(double, double);
extern long double fmaxl(long double, long double);

extern float fminf(float, float);
extern double fmin(double, double);
extern long double fminl(long double, long double);

extern float fmaf(float, float, float);
extern double fma(double, double, double);
extern long double fmal(long double, long double, long double);

#line 535 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"






#line 548 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 560 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"





#line 571 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"
















extern float __exp10f(float) ;
extern double __exp10(double) ;





inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp);
inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp);








extern float __cospif(float) ;
extern double __cospi(double) ;
extern float __sinpif(float) ;
extern double __sinpi(double) ;
extern float __tanpif(float) ;
extern double __tanpi(double) ;


extern _Float16 __fabsf16(_Float16) ;
extern _Float16 __hypotf16(_Float16, _Float16) ;
extern _Float16 __sqrtf16(_Float16) ;
extern _Float16 __ceilf16(_Float16) ;
extern _Float16 __floorf16(_Float16) ;
extern _Float16 __rintf16(_Float16) ;
extern _Float16 __roundf16(_Float16) ;
extern _Float16 __truncf16(_Float16) ;
extern _Float16 __copysignf16(_Float16, _Float16) ;
extern _Float16 __nextafterf16(_Float16, _Float16) ;
extern _Float16 __fmaxf16(_Float16, _Float16) ;
extern _Float16 __fminf16(_Float16, _Float16) ;
extern _Float16 __fmaf16(_Float16, _Float16, _Float16) ;

#line 640 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"









inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp);
inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp);






struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);

inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}
#line 685 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"





#line 691 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"
extern double j0(double) ;
extern double j1(double) ;
extern double jn(int, double) ;
extern double y0(double) ;
extern double y1(double) ;
extern double yn(int, double) ;
extern double scalb(double, double); 
extern int signgam;



#line 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 718 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"




#line 737 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"





#line 753 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 774 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 776 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"
struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};

#line 786 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"



#line 792 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"

#line 794 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h"
#line 9 "../code6/c_test_compat10.nc"

static _Bool g_ok = true;

#line 13 "../code6/c_test_compat10.nc"

static pthread_mutex_t g_mutex = {0x32AAABA7, {0}};
static pthread_cond_t g_cond = {0x3CB0B1BB, {0}};
static double g_shared_sum = 0.0;
static int g_done = 0;

struct WorkerArg {
    double base;
};

static double eval_expr(double x) {
    double sc = sin(x) + cos(x);
    double part = fma(sc, x, log1p(x));
    double root = hypot(x, x / 2.0);
    double erfv = erf(x / 3.0);
    double gamma = tgamma(x / 2.0 + 1.0);
    double tanhv = tanh(x / 4.0);
    return part + root + erfv + gamma + tanhv;
}

static void *worker(void *arg) {
    struct WorkerArg *w = (struct WorkerArg*)arg;
    double val = eval_expr(w->base);

    pthread_mutex_lock(&g_mutex);
    g_shared_sum += val;
    g_done++;
    pthread_cond_signal(&g_cond);
    pthread_mutex_unlock(&g_mutex);

    return 0;
}

int main(void) {
    const double inputs[] = { 1.0, 2.5, 3.75, 5.0 };
    const int n = (int)(sizeof(inputs)/sizeof(inputs[0]));
    pthread_t threads[4];
    struct WorkerArg args[4];

    double expected = 0.0;
    for (int i = 0; i < n; i++) {
        args[i].base = inputs[i];
        expected += eval_expr(inputs[i]);
        int rc = pthread_create(&threads[i], 0, worker, &args[i]);
        do {     if (!(rc == 0)) {         fprintf(__stderrp, "FAIL: %s at %s:%d\n", "rc == 0", "../code6/c_test_compat10.nc", 57);         g_ok = false;     } } while (0);
    }

    pthread_mutex_lock(&g_mutex);
    while (g_done < n) {
        pthread_cond_wait(&g_cond, &g_mutex);
    }
    double total = g_shared_sum;
    pthread_mutex_unlock(&g_mutex);

    for (int i = 0; i < n; i++) {
        pthread_join(threads[i], 0);
    }

    double diff = fabs(total - expected);
    do {     if (!(diff < 1e-9)) {         fprintf(__stderrp, "FAIL: %s at %s:%d\n", "diff < 1e-9", "../code6/c_test_compat10.nc", 72);         g_ok = false;     } } while (0);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
