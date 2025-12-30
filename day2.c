/* Generated from day2.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0 (rev e31bbee5)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: day2.scm
   uses: eval library extras
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[26];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,116,101,115,116,32,110,117,109,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,21),40,115,116,114,105,110,103,45,104,101,97,100,32,115,116,114,32,101,110,100,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,23),40,115,116,114,105,110,103,45,116,97,105,108,32,115,116,114,32,115,116,97,114,116,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,32),40,115,116,114,105,110,103,45,102,105,110,100,45,110,101,120,116,45,99,104,97,114,32,115,116,114,32,99,104,97,114,41};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,18),40,99,111,117,110,116,45,100,105,103,105,116,115,32,110,117,109,41,0,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,15),40,99,104,101,99,107,45,110,117,109,32,110,117,109,41,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,26),40,110,117,109,45,116,111,45,108,105,115,116,32,110,117,109,32,100,105,118,105,115,105,111,110,41,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,14),40,99,104,101,99,107,45,108,105,115,116,32,108,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,29),40,99,104,101,99,107,45,110,117,109,45,109,97,110,121,32,110,117,109,32,100,105,118,105,115,105,111,110,41,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,27),40,115,101,97,114,99,104,45,114,97,110,103,101,32,102,105,114,115,116,32,115,101,99,111,110,100,41,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,17),40,112,97,114,115,101,45,108,105,110,101,32,108,105,110,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,12),40,115,111,108,118,101,32,102,105,108,101,41,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_188)
static void C_ccall f_188(C_word c,C_word *av) C_noret;
C_noret_decl(f_191)
static void C_ccall f_191(C_word c,C_word *av) C_noret;
C_noret_decl(f_194)
static void C_ccall f_194(C_word c,C_word *av) C_noret;
C_noret_decl(f_196)
static void C_ccall f_196(C_word c,C_word *av) C_noret;
C_noret_decl(f_204)
static void C_ccall f_204(C_word c,C_word *av) C_noret;
C_noret_decl(f_206)
static void C_ccall f_206(C_word c,C_word *av) C_noret;
C_noret_decl(f_212)
static void C_ccall f_212(C_word c,C_word *av) C_noret;
C_noret_decl(f_222)
static void C_ccall f_222(C_word c,C_word *av) C_noret;
C_noret_decl(f_242)
static void C_ccall f_242(C_word c,C_word *av) C_noret;
C_noret_decl(f_246)
static void C_ccall f_246(C_word c,C_word *av) C_noret;
C_noret_decl(f_256)
static void C_ccall f_256(C_word c,C_word *av) C_noret;
C_noret_decl(f_270)
static void C_ccall f_270(C_word c,C_word *av) C_noret;
C_noret_decl(f_274)
static void C_ccall f_274(C_word c,C_word *av) C_noret;
C_noret_decl(f_278)
static void C_ccall f_278(C_word c,C_word *av) C_noret;
C_noret_decl(f_280)
static void C_ccall f_280(C_word c,C_word *av) C_noret;
C_noret_decl(f_287)
static void C_fcall f_287(C_word t0,C_word t1) C_noret;
C_noret_decl(f_290)
static void C_ccall f_290(C_word c,C_word *av) C_noret;
C_noret_decl(f_293)
static void C_ccall f_293(C_word c,C_word *av) C_noret;
C_noret_decl(f_303)
static void C_ccall f_303(C_word c,C_word *av) C_noret;
C_noret_decl(f_311)
static void C_ccall f_311(C_word c,C_word *av) C_noret;
C_noret_decl(f_315)
static void C_ccall f_315(C_word c,C_word *av) C_noret;
C_noret_decl(f_319)
static void C_ccall f_319(C_word c,C_word *av) C_noret;
C_noret_decl(f_323)
static void C_ccall f_323(C_word c,C_word *av) C_noret;
C_noret_decl(f_327)
static void C_ccall f_327(C_word c,C_word *av) C_noret;
C_noret_decl(f_331)
static void C_ccall f_331(C_word c,C_word *av) C_noret;
C_noret_decl(f_335)
static void C_ccall f_335(C_word c,C_word *av) C_noret;
C_noret_decl(f_339)
static void C_ccall f_339(C_word c,C_word *av) C_noret;
C_noret_decl(f_347)
static void C_ccall f_347(C_word c,C_word *av) C_noret;
C_noret_decl(f_349)
static void C_ccall f_349(C_word c,C_word *av) C_noret;
C_noret_decl(f_363)
static void C_ccall f_363(C_word c,C_word *av) C_noret;
C_noret_decl(f_367)
static void C_ccall f_367(C_word c,C_word *av) C_noret;
C_noret_decl(f_371)
static void C_ccall f_371(C_word c,C_word *av) C_noret;
C_noret_decl(f_373)
static void C_ccall f_373(C_word c,C_word *av) C_noret;
C_noret_decl(f_411)
static void C_ccall f_411(C_word c,C_word *av) C_noret;
C_noret_decl(f_421)
static void C_fcall f_421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_430)
static void C_ccall f_430(C_word c,C_word *av) C_noret;
C_noret_decl(f_433)
static void C_ccall f_433(C_word c,C_word *av) C_noret;
C_noret_decl(f_454)
static void C_ccall f_454(C_word c,C_word *av) C_noret;
C_noret_decl(f_458)
static void C_ccall f_458(C_word c,C_word *av) C_noret;
C_noret_decl(f_466)
static void C_ccall f_466(C_word c,C_word *av) C_noret;
C_noret_decl(f_473)
static void C_ccall f_473(C_word c,C_word *av) C_noret;
C_noret_decl(f_477)
static void C_ccall f_477(C_word c,C_word *av) C_noret;
C_noret_decl(f_479)
static void C_ccall f_479(C_word c,C_word *av) C_noret;
C_noret_decl(f_496)
static void C_ccall f_496(C_word c,C_word *av) C_noret;
C_noret_decl(f_500)
static void C_ccall f_500(C_word c,C_word *av) C_noret;
C_noret_decl(f_506)
static void C_ccall f_506(C_word c,C_word *av) C_noret;
C_noret_decl(f_516)
static void C_ccall f_516(C_word c,C_word *av) C_noret;
C_noret_decl(f_519)
static void C_ccall f_519(C_word c,C_word *av) C_noret;
C_noret_decl(f_522)
static void C_ccall f_522(C_word c,C_word *av) C_noret;
C_noret_decl(f_529)
static void C_ccall f_529(C_word c,C_word *av) C_noret;
C_noret_decl(f_533)
static void C_ccall f_533(C_word c,C_word *av) C_noret;
C_noret_decl(f_537)
static void C_ccall f_537(C_word c,C_word *av) C_noret;
C_noret_decl(f_551)
static void C_ccall f_551(C_word c,C_word *av) C_noret;
C_noret_decl(f_555)
static void C_ccall f_555(C_word c,C_word *av) C_noret;
C_noret_decl(f_563)
static void C_ccall f_563(C_word c,C_word *av) C_noret;
C_noret_decl(f_567)
static void C_ccall f_567(C_word c,C_word *av) C_noret;
C_noret_decl(f_571)
static void C_ccall f_571(C_word c,C_word *av) C_noret;
C_noret_decl(f_579)
static void C_ccall f_579(C_word c,C_word *av) C_noret;
C_noret_decl(f_583)
static void C_ccall f_583(C_word c,C_word *av) C_noret;
C_noret_decl(f_589)
static void C_ccall f_589(C_word c,C_word *av) C_noret;
C_noret_decl(f_593)
static void C_ccall f_593(C_word c,C_word *av) C_noret;
C_noret_decl(f_596)
static void C_ccall f_596(C_word c,C_word *av) C_noret;
C_noret_decl(f_599)
static void C_ccall f_599(C_word c,C_word *av) C_noret;
C_noret_decl(f_606)
static void C_ccall f_606(C_word c,C_word *av) C_noret;
C_noret_decl(f_610)
static void C_ccall f_610(C_word c,C_word *av) C_noret;
C_noret_decl(f_616)
static void C_ccall f_616(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_287)
static void C_ccall trf_287(C_word c,C_word *av) C_noret;
static void C_ccall trf_287(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_287(t0,t1);}

C_noret_decl(trf_421)
static void C_ccall trf_421(C_word c,C_word *av) C_noret;
static void C_ccall trf_421(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_421(t0,t1);}

/* k186 */
static void C_ccall f_188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_188,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_191,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k189 in k186 */
static void C_ccall f_191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_191,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_194,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k192 in k189 in k186 */
static void C_ccall f_194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(39,c,4)))){
C_save_and_reclaim((void *)f_194,c,av);}
a=C_alloc(39);
t2=C_mutate((C_word*)lf[0]+1 /* (set! test ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_196,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[3]+1 /* (set! string-head ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_206,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[5]+1 /* (set! string-tail ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_212,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[6]+1 /* (set! string-find-next-char ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_222,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[2]+1 /* (set! count-digits ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_256,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[9]+1 /* (set! check-num ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_280,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[12]+1 /* (set! num-to-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_349,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[14]+1 /* (set! check-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_373,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[15]+1 /* (set! check-num-many ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_411,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[17]+1 /* (set! search-range ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_479,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[18]+1 /* (set! parse-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_506,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[21]+1 /* (set! solve ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_589,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_616,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[25]);
C_word *av2=av;
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t14;
tp(2,av2);}}

/* test in k192 in k189 in k186 */
static void C_ccall f_196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_196,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_204,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("day2.scm:4: count-digits"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k202 in test in k192 in k189 in k186 */
static void C_ccall f_204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_204,c,av);}
C_trace(C_text("day2.scm:4: scheme#display"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* string-head in k192 in k189 in k186 */
static void C_ccall f_206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_206,c,av);}
C_trace(C_text("day2.scm:7: scheme#substring"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[4]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[4]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}

/* string-tail in k192 in k189 in k186 */
static void C_ccall f_212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_212,c,av);}
C_trace(C_text("day2.scm:10: scheme#substring"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[4]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[4]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_i_string_length(t2);
tp(5,av2);}}

/* string-find-next-char in k192 in k189 in k186 */
static void C_ccall f_222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_222,c,av);}
a=C_alloc(7);
t4=C_i_string_length(t2);
if(C_truep(C_i_nequalp(t4,C_fix(0)))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_string_ref(t2,C_fix(0));
if(C_truep(C_i_char_equalp(t5,t3))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_242,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_246,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("day2.scm:15: string-tail"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=C_fix(1);
tp(4,av2);}}}}

/* k240 in string-find-next-char in k192 in k189 in k186 */
static void C_ccall f_242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_242,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_s_a_i_plus(&a,2,C_fix(1),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k244 in string-find-next-char in k192 in k189 in k186 */
static void C_ccall f_246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_246,c,av);}
C_trace(C_text("day2.scm:15: string-find-next-char"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* count-digits in k192 in k189 in k186 */
static void C_ccall f_256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_256,c,av);}
a=C_alloc(9);
if(C_truep(C_i_nequalp(C_fix(0),t2))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_270,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_274,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_278,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("day2.scm:18: scheme#/"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=C_fix(10);
tp(4,av2);}}}

/* k268 in count-digits in k192 in k189 in k186 */
static void C_ccall f_270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_270,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_s_a_i_plus(&a,2,C_fix(1),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k272 in count-digits in k192 in k189 in k186 */
static void C_ccall f_274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_274,c,av);}
C_trace(C_text("day2.scm:18: count-digits"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[2]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k276 in count-digits in k192 in k189 in k186 */
static void C_ccall f_278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_278,c,av);}
C_trace(C_text("day2.scm:18: scheme#truncate"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* check-num in k192 in k189 in k186 */
static void C_ccall f_280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_280,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_287,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_347,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("day2.scm:22: count-digits"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k285 in check-num in k192 in k189 in k186 */
static void C_fcall f_287(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_287,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_290,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("day2.scm:25: scheme#display"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k288 in k285 in check-num in k192 in k189 in k186 */
static void C_ccall f_290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_290,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("day2.scm:25: scheme#newline"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t2;
tp(2,av2);}}

/* k291 in k288 in k285 in check-num in k192 in k189 in k186 */
static void C_ccall f_293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_293,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k301 in k345 in check-num in k192 in k189 in k186 */
static void C_ccall f_303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_303,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_315,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_319,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_323,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("day2.scm:24: count-digits"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k309 in k301 in k345 in check-num in k192 in k189 in k186 */
static void C_ccall f_311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_311,c,av);}
a=C_alloc(5);
t2=C_s_a_i_modulo(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];
f_287(t3,C_i_nequalp(((C_word*)t0)[4],t2));}

/* k313 in k301 in k345 in check-num in k192 in k189 in k186 */
static void C_ccall f_315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_315,c,av);}
C_trace(C_text("day2.scm:24: scheme#expt"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(10);
av2[3]=t1;
tp(4,av2);}}

/* k317 in k301 in k345 in check-num in k192 in k189 in k186 */
static void C_ccall f_319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_319,c,av);}
C_trace(C_text("day2.scm:24: scheme#truncate"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k321 in k301 in k345 in check-num in k192 in k189 in k186 */
static void C_ccall f_323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_323,c,av);}
C_trace(C_text("day2.scm:24: scheme#/"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(2);
tp(4,av2);}}

/* k325 in k345 in check-num in k192 in k189 in k186 */
static void C_ccall f_327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_327,c,av);}
C_trace(C_text("day2.scm:23: scheme#truncate"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k329 in k345 in check-num in k192 in k189 in k186 */
static void C_ccall f_331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_331,c,av);}
C_trace(C_text("day2.scm:23: scheme#/"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k333 in k345 in check-num in k192 in k189 in k186 */
static void C_ccall f_335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_335,c,av);}
C_trace(C_text("day2.scm:23: scheme#expt"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(10);
av2[3]=t1;
tp(4,av2);}}

/* k337 in k345 in check-num in k192 in k189 in k186 */
static void C_ccall f_339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_339,c,av);}
C_trace(C_text("day2.scm:23: scheme#/"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(2);
tp(4,av2);}}

/* k345 in check-num in k192 in k189 in k186 */
static void C_ccall f_347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_347,c,av);}
a=C_alloc(22);
t2=C_s_a_i_modulo(&a,2,t1,C_fix(2));
if(C_truep(C_i_nequalp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_303,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_327,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_331,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_335,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_339,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("day2.scm:23: count-digits"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t3=((C_word*)t0)[3];
f_287(t3,C_SCHEME_FALSE);}}

/* num-to-list in k192 in k189 in k186 */
static void C_ccall f_349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_349,c,av);}
a=C_alloc(5);
if(C_truep(C_i_string_equal_p(t2,lf[13]))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_363,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("day2.scm:30: string-head"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}}

/* k361 in num-to-list in k192 in k189 in k186 */
static void C_ccall f_363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_363,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_367,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_371,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("day2.scm:30: string-tail"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k365 in k361 in num-to-list in k192 in k189 in k186 */
static void C_ccall f_367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_367,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k369 in k361 in num-to-list in k192 in k189 in k186 */
static void C_ccall f_371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_371,c,av);}
C_trace(C_text("day2.scm:30: num-to-list"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* check-list in k192 in k189 in k186 */
static void C_ccall f_373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_373,c,av);}
t3=C_i_length(t2);
if(C_truep(C_i_nequalp(t3,C_fix(1)))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_cdr(t2);
t6=C_i_car(t5);
if(C_truep(C_i_string_equal_p(t4,t6))){
C_trace(C_text("day2.scm:36: check-list"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t1;
av2[2]=C_i_cdr(t2);
tp(3,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}

/* check-num-many in k192 in k189 in k186 */
static void C_ccall f_411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_411,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_477,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("day2.scm:40: count-digits"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k419 in k475 in check-num-many in k192 in k189 in k186 */
static void C_fcall f_421(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_421,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_466,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("day2.scm:41: count-digits"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* k428 in k464 in k419 in k475 in check-num-many in k192 in k189 in k186 */
static void C_ccall f_430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_430,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_454,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("day2.scm:43: check-list"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=t1;
tp(3,av2);}}

/* k431 in k428 in k464 in k419 in k475 in check-num-many in k192 in k189 in k186 */
static void C_ccall f_433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_433,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
C_trace(C_text("day2.scm:45: check-num-many"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
tp(4,av2);}}

/* k452 in k428 in k464 in k419 in k475 in check-num-many in k192 in k189 in k186 */
static void C_ccall f_454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_454,c,av);}
a=C_alloc(29);
t2=C_eqp(t1,C_SCHEME_TRUE);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
f_433(2,av2);}}
else{
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
C_trace(C_text("day2.scm:44: check-num-many"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
tp(4,av2);}}}

/* k456 in k464 in k419 in k475 in check-num-many in k192 in k189 in k186 */
static void C_ccall f_458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_458,c,av);}
C_trace(C_text("day2.scm:42: num-to-list"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k464 in k419 in k475 in check-num-many in k192 in k189 in k186 */
static void C_ccall f_466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_466,c,av);}
a=C_alloc(14);
t2=C_s_a_i_modulo(&a,2,t1,((C_word*)t0)[2]);
if(C_truep(C_i_nequalp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_458,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("day2.scm:42: scheme#number->string"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k471 in k475 in check-num-many in k192 in k189 in k186 */
static void C_ccall f_473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_473,c,av);}
t2=((C_word*)t0)[2];
f_421(t2,C_i_nequalp(((C_word*)t0)[3],t1));}

/* k475 in check-num-many in k192 in k189 in k186 */
static void C_ccall f_477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_477,c,av);}
a=C_alloc(9);
t2=C_i_nequalp(C_fix(0),t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_421(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_473,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("day2.scm:40: count-digits"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* search-range in k192 in k189 in k186 */
static void C_ccall f_479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_479,c,av);}
a=C_alloc(5);
if(C_truep(C_i_nequalp(t2,t3))){
C_trace(C_text("day2.scm:50: check-num-many"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(1);
tp(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_496,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("day2.scm:51: check-num-many"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_fix(1);
tp(4,av2);}}}

/* k494 in search-range in k192 in k189 in k186 */
static void C_ccall f_496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_496,c,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_500,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
C_trace(C_text("day2.scm:51: search-range"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k498 in k494 in search-range in k192 in k189 in k186 */
static void C_ccall f_500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_500,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_s_a_i_plus(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* parse-line in k192 in k189 in k186 */
static void C_ccall f_506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_506,c,av);}
a=C_alloc(8);
t3=C_i_string_length(t2);
if(C_truep(C_i_nequalp(C_fix(0),t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_516,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_583,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("day2.scm:56: string-find-next-char"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=C_make_character(45);
tp(4,av2);}}}

/* k514 in parse-line in k192 in k189 in k186 */
static void C_ccall f_516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_516,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_519,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_579,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("day2.scm:57: string-find-next-char"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=C_make_character(45);
tp(4,av2);}}

/* k517 in k514 in parse-line in k192 in k189 in k186 */
static void C_ccall f_519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_519,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_522,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_571,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("day2.scm:58: string-find-next-char"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=t1;
av2[3]=C_make_character(44);
tp(4,av2);}}

/* k520 in k517 in k514 in parse-line in k192 in k189 in k186 */
static void C_ccall f_522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_522,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_563,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("day2.scm:60: scheme#string->number"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k527 in k520 in k517 in k514 in parse-line in k192 in k189 in k186 */
static void C_ccall f_529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_529,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_533,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_537,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_555,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("day2.scm:62: string-find-next-char"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=C_make_character(44);
tp(4,av2);}}

/* k531 in k527 in k520 in k517 in k514 in parse-line in k192 in k189 in k186 */
static void C_ccall f_533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_533,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_s_a_i_plus(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k535 in k527 in k520 in k517 in k514 in parse-line in k192 in k189 in k186 */
static void C_ccall f_537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_537,c,av);}
C_trace(C_text("day2.scm:61: parse-line"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[18]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[18]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k549 in k553 in k527 in k520 in k517 in k514 in parse-line in k192 in k189 in k186 */
static void C_ccall f_551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_551,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,C_fix(1),t1);
C_trace(C_text("day2.scm:63: string-tail"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
tp(4,av2);}}

/* k553 in k527 in k520 in k517 in k514 in parse-line in k192 in k189 in k186 */
static void C_ccall f_555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_555,c,av);}
a=C_alloc(4);
t2=C_i_string_length(((C_word*)t0)[2]);
if(C_truep(C_i_greater_or_equalp(t1,t2))){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[19];
f_537(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_551,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("day2.scm:63: string-find-next-char"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[6]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=C_make_character(44);
tp(4,av2);}}}

/* k561 in k520 in k517 in k514 in parse-line in k192 in k189 in k186 */
static void C_ccall f_563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_563,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_567,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("day2.scm:60: scheme#string->number"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k565 in k561 in k520 in k517 in k514 in parse-line in k192 in k189 in k186 */
static void C_ccall f_567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_567,c,av);}
C_trace(C_text("day2.scm:60: search-range"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[17]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k569 in k517 in k514 in parse-line in k192 in k189 in k186 */
static void C_ccall f_571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_571,c,av);}
C_trace(C_text("day2.scm:58: string-head"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k577 in k514 in parse-line in k192 in k189 in k186 */
static void C_ccall f_579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_579,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,C_fix(1),t1);
C_trace(C_text("day2.scm:57: string-tail"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
tp(4,av2);}}

/* k581 in parse-line in k192 in k189 in k186 */
static void C_ccall f_583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_583,c,av);}
C_trace(C_text("day2.scm:56: string-head"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* solve in k192 in k189 in k186 */
static void C_ccall f_589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_589,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_593,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("day2.scm:67: scheme#open-input-file"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[24]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k591 in solve in k192 in k189 in k186 */
static void C_ccall f_593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_593,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_596,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_606,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_610,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("day2.scm:69: chicken.io#read-line"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t4;
av2[2]=t1;
tp(3,av2);}}

/* k594 in k591 in solve in k192 in k189 in k186 */
static void C_ccall f_596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_596,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_599,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("day2.scm:70: scheme#close-input-port"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[22]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k597 in k594 in k591 in solve in k192 in k189 in k186 */
static void C_ccall f_599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_599,c,av);}
C_trace(C_text("day2.scm:71: scheme#newline"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[10]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}

/* k604 in k591 in solve in k192 in k189 in k186 */
static void C_ccall f_606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_606,c,av);}
C_trace(C_text("day2.scm:69: scheme#display"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[1]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k608 in k591 in solve in k192 in k189 in k186 */
static void C_ccall f_610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_610,c,av);}
C_trace(C_text("day2.scm:69: parse-line"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[18]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[18]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k614 in k192 in k189 in k186 */
static void C_ccall f_616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_616,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point

void C_ccall C_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(168))){
C_save(t1);
C_rereclaim2(168*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,26);
lf[0]=C_h_intern(&lf[0],4, C_text("test"));
lf[1]=C_h_intern(&lf[1],14, C_text("scheme#display"));
lf[2]=C_h_intern(&lf[2],12, C_text("count-digits"));
lf[3]=C_h_intern(&lf[3],11, C_text("string-head"));
lf[4]=C_h_intern(&lf[4],16, C_text("scheme#substring"));
lf[5]=C_h_intern(&lf[5],11, C_text("string-tail"));
lf[6]=C_h_intern(&lf[6],21, C_text("string-find-next-char"));
lf[7]=C_h_intern(&lf[7],15, C_text("scheme#truncate"));
lf[8]=C_h_intern(&lf[8],8, C_text("scheme#/"));
lf[9]=C_h_intern(&lf[9],9, C_text("check-num"));
lf[10]=C_h_intern(&lf[10],14, C_text("scheme#newline"));
lf[11]=C_h_intern(&lf[11],11, C_text("scheme#expt"));
lf[12]=C_h_intern(&lf[12],11, C_text("num-to-list"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[14]=C_h_intern(&lf[14],10, C_text("check-list"));
lf[15]=C_h_intern(&lf[15],14, C_text("check-num-many"));
lf[16]=C_h_intern(&lf[16],21, C_text("scheme#number->string"));
lf[17]=C_h_intern(&lf[17],12, C_text("search-range"));
lf[18]=C_h_intern(&lf[18],10, C_text("parse-line"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[20]=C_h_intern(&lf[20],21, C_text("scheme#string->number"));
lf[21]=C_h_intern(&lf[21],5, C_text("solve"));
lf[22]=C_h_intern(&lf[22],23, C_text("scheme#close-input-port"));
lf[23]=C_h_intern(&lf[23],20, C_text("chicken.io#read-line"));
lf[24]=C_h_intern(&lf[24],22, C_text("scheme#open-input-file"));
lf[25]=C_h_intern(&lf[25],34, C_text("chicken.base#implicit-exit-handler"));
C_register_lf2(lf,26,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_188,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[68] = {
{C_text("f_188:day2_2escm"),(void*)f_188},
{C_text("f_191:day2_2escm"),(void*)f_191},
{C_text("f_194:day2_2escm"),(void*)f_194},
{C_text("f_196:day2_2escm"),(void*)f_196},
{C_text("f_204:day2_2escm"),(void*)f_204},
{C_text("f_206:day2_2escm"),(void*)f_206},
{C_text("f_212:day2_2escm"),(void*)f_212},
{C_text("f_222:day2_2escm"),(void*)f_222},
{C_text("f_242:day2_2escm"),(void*)f_242},
{C_text("f_246:day2_2escm"),(void*)f_246},
{C_text("f_256:day2_2escm"),(void*)f_256},
{C_text("f_270:day2_2escm"),(void*)f_270},
{C_text("f_274:day2_2escm"),(void*)f_274},
{C_text("f_278:day2_2escm"),(void*)f_278},
{C_text("f_280:day2_2escm"),(void*)f_280},
{C_text("f_287:day2_2escm"),(void*)f_287},
{C_text("f_290:day2_2escm"),(void*)f_290},
{C_text("f_293:day2_2escm"),(void*)f_293},
{C_text("f_303:day2_2escm"),(void*)f_303},
{C_text("f_311:day2_2escm"),(void*)f_311},
{C_text("f_315:day2_2escm"),(void*)f_315},
{C_text("f_319:day2_2escm"),(void*)f_319},
{C_text("f_323:day2_2escm"),(void*)f_323},
{C_text("f_327:day2_2escm"),(void*)f_327},
{C_text("f_331:day2_2escm"),(void*)f_331},
{C_text("f_335:day2_2escm"),(void*)f_335},
{C_text("f_339:day2_2escm"),(void*)f_339},
{C_text("f_347:day2_2escm"),(void*)f_347},
{C_text("f_349:day2_2escm"),(void*)f_349},
{C_text("f_363:day2_2escm"),(void*)f_363},
{C_text("f_367:day2_2escm"),(void*)f_367},
{C_text("f_371:day2_2escm"),(void*)f_371},
{C_text("f_373:day2_2escm"),(void*)f_373},
{C_text("f_411:day2_2escm"),(void*)f_411},
{C_text("f_421:day2_2escm"),(void*)f_421},
{C_text("f_430:day2_2escm"),(void*)f_430},
{C_text("f_433:day2_2escm"),(void*)f_433},
{C_text("f_454:day2_2escm"),(void*)f_454},
{C_text("f_458:day2_2escm"),(void*)f_458},
{C_text("f_466:day2_2escm"),(void*)f_466},
{C_text("f_473:day2_2escm"),(void*)f_473},
{C_text("f_477:day2_2escm"),(void*)f_477},
{C_text("f_479:day2_2escm"),(void*)f_479},
{C_text("f_496:day2_2escm"),(void*)f_496},
{C_text("f_500:day2_2escm"),(void*)f_500},
{C_text("f_506:day2_2escm"),(void*)f_506},
{C_text("f_516:day2_2escm"),(void*)f_516},
{C_text("f_519:day2_2escm"),(void*)f_519},
{C_text("f_522:day2_2escm"),(void*)f_522},
{C_text("f_529:day2_2escm"),(void*)f_529},
{C_text("f_533:day2_2escm"),(void*)f_533},
{C_text("f_537:day2_2escm"),(void*)f_537},
{C_text("f_551:day2_2escm"),(void*)f_551},
{C_text("f_555:day2_2escm"),(void*)f_555},
{C_text("f_563:day2_2escm"),(void*)f_563},
{C_text("f_567:day2_2escm"),(void*)f_567},
{C_text("f_571:day2_2escm"),(void*)f_571},
{C_text("f_579:day2_2escm"),(void*)f_579},
{C_text("f_583:day2_2escm"),(void*)f_583},
{C_text("f_589:day2_2escm"),(void*)f_589},
{C_text("f_593:day2_2escm"),(void*)f_593},
{C_text("f_596:day2_2escm"),(void*)f_596},
{C_text("f_599:day2_2escm"),(void*)f_599},
{C_text("f_606:day2_2escm"),(void*)f_606},
{C_text("f_610:day2_2escm"),(void*)f_610},
{C_text("f_616:day2_2escm"),(void*)f_616},
{C_text("toplevel:day2_2escm"),(void*)C_toplevel},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|safe globals: (solve parse-line search-range check-num-many check-list num-to-list check-num count-digits string-find-next-char string-tail string-head test) 
o|replaced variables: 108 
o|removed binding forms: 21 
o|removed binding forms: 90 
o|simplifications: ((##core#call . 38)) 
o|  call simplifications:
o|    scheme#>=
o|    scheme#equal?
o|    scheme#length
o|    scheme#car	2
o|    scheme#cdr	2
o|    scheme#string=?	2
o|    scheme#cons
o|    scheme#modulo	3
o|    scheme#=	10
o|    scheme#string-ref
o|    scheme#char=?
o|    scheme#+	9
o|    scheme#string-length	4
o|contracted procedure: k218 
o|contracted procedure: k252 
o|contracted procedure: k227 
o|contracted procedure: k248 
o|contracted procedure: k233 
o|contracted procedure: k261 
o|contracted procedure: k341 
o|contracted procedure: k294 
o|contracted procedure: k305 
o|contracted procedure: k354 
o|contracted procedure: k407 
o|contracted procedure: k378 
o|contracted procedure: k395 
o|contracted procedure: k403 
o|contracted procedure: k399 
o|contracted procedure: k384 
o|contracted procedure: k391 
o|contracted procedure: k416 
o|contracted procedure: k460 
o|contracted procedure: k425 
o|contracted procedure: k438 
o|contracted procedure: k441 
o|contracted procedure: k448 
o|contracted procedure: k484 
o|contracted procedure: k502 
o|contracted procedure: k585 
o|contracted procedure: k511 
o|contracted procedure: k557 
o|contracted procedure: k538 
o|contracted procedure: k545 
o|contracted procedure: k573 
o|simplifications: ((let . 13)) 
o|removed binding forms: 31 
o|customizable procedures: (k419 k285) 
o|calls to known targets: 6 
*/
/* end of file */
