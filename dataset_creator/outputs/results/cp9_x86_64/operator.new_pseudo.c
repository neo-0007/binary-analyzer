
/* operator new(unsigned long) */

void * operator_new(ulong param_1)

{
  undefined8 *puVar1;
  size_t __size;
  void *pvVar2;
  code *pcVar3;
  
  __size = 1;
  if (param_1 != 0) {
    __size = param_1;
  }
  while( true ) {
    pvVar2 = malloc(__size);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    pcVar3 = (code *)std::get_new_handler();
    if (pcVar3 == (code *)0x0) break;
    (*pcVar3)();
  }
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR__bad_alloc_0092bf50;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
}

