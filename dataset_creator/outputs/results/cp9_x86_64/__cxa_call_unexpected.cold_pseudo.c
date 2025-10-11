
void __cxa_call_unexpected_cold(void)

{
  char cVar1;
  long *plVar2;
  undefined8 *puVar3;
  int unaff_EBP;
  _func_void *unaff_R12;
  uchar *unaff_R13;
  
  __cxa_begin_catch();
  plVar2 = (long *)__cxa_get_globals_fast();
  puVar3 = (undefined8 *)*plVar2;
  if ((*(byte *)(puVar3 + 10) & 1) == 0) {
    puVar3 = puVar3 + 0xe;
  }
  else {
    puVar3 = (undefined8 *)*puVar3;
  }
                    /* try { // try from 0040388b to 004038ed has its CatchHandler @ 004038f4 */
  parse_lsda_header((_Unwind_Context *)0x0,unaff_R13,(lsda_header_info *)&stack0x00000000);
  cVar1 = check_exception_spec
                    ((lsda_header_info *)&stack0x00000000,(type_info *)puVar3[-0xe],puVar3,
                     (long)unaff_EBP);
  if (cVar1 == '\0') {
    cVar1 = check_exception_spec
                      ((lsda_header_info *)&stack0x00000000,
                       (type_info *)&std::bad_exception::typeinfo,(void *)0x0,(long)unaff_EBP);
    if (cVar1 != '\0') {
      puVar3 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar3 = &PTR__bad_exception_0092c118;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&std::bad_exception::typeinfo,std::bad_exception::~bad_exception);
    }
                    /* WARNING: Subroutine does not return */
    __cxxabiv1::__terminate(unaff_R12);
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0040390d to 00403911 has its CatchHandler @ 004038f4 */
  __cxa_rethrow();
}

