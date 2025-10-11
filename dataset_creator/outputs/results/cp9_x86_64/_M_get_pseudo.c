
/* std::Catalogs::_M_get(int) const */

int * __thiscall std::Catalogs::_M_get(Catalogs *this,int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __gnu_cxx::__throw_concurrence_lock_error();
  }
  puVar2 = *(undefined8 **)(this + 0x30);
  lVar4 = (long)*(undefined8 **)(this + 0x38) - (long)puVar2;
  lVar3 = lVar4 >> 3;
  while (0 < lVar4) {
    while( true ) {
      lVar4 = lVar3 >> 1;
      if (*(int *)puVar2[lVar4] < param_1) break;
      lVar3 = lVar4;
      if (lVar4 < 1) goto LAB_006aeae9;
    }
    puVar2 = puVar2 + lVar4 + 1;
    lVar3 = (lVar3 - lVar4) + -1;
    lVar4 = lVar3;
  }
LAB_006aeae9:
  if (*(undefined8 **)(this + 0x38) == puVar2) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)*puVar2;
    if (*(int *)*puVar2 != param_1) {
      piVar5 = (int *)0x0;
    }
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
    return piVar5;
  }
  puVar2 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar2 = &PTR____concurrence_unlock_error_00927270;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar2,&__gnu_cxx::__concurrence_unlock_error::typeinfo,
              __gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
}

