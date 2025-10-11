
/* std::Catalogs::_M_erase(int) */

void __thiscall std::Catalogs::_M_erase(Catalogs *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *__src;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __gnu_cxx::__throw_concurrence_lock_error();
  }
  puVar3 = *(undefined8 **)(this + 0x30);
  lVar5 = (long)*(undefined8 **)(this + 0x38) - (long)puVar3;
  lVar4 = lVar5 >> 3;
  while (0 < lVar5) {
    while( true ) {
      lVar5 = lVar4 >> 1;
      if (*(int *)puVar3[lVar5] < param_1) break;
      lVar4 = lVar5;
      if (lVar5 < 1) goto LAB_006ae9ca;
    }
    puVar3 = puVar3 + lVar5 + 1;
    lVar4 = (lVar4 - lVar5) + -1;
    lVar5 = lVar4;
  }
LAB_006ae9ca:
  if ((*(undefined8 **)(this + 0x38) == puVar3) || (piVar1 = (int *)*puVar3, *piVar1 != param_1)) {
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)this);
    if (iVar2 == 0) {
      return;
    }
    puVar3 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar3 = &PTR____concurrence_unlock_error_00927270;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00403a74 to 00403a78 has its CatchHandler @ 00403a8e */
    __cxa_throw(puVar3,&__gnu_cxx::__concurrence_unlock_error::typeinfo,
                __gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
  }
  free(*(void **)(piVar1 + 2));
  locale::~locale((locale *)(piVar1 + 4));
  operator_delete(piVar1);
  __src = puVar3 + 1;
  if (*(undefined8 **)(this + 0x38) != __src) {
    memmove(puVar3,__src,(long)*(undefined8 **)(this + 0x38) - (long)__src);
    __src = *(undefined8 **)(this + 0x38);
  }
  *(undefined8 **)(this + 0x38) = __src + -1;
  if (*(int *)(this + 0x28) + -1 == param_1) {
    *(int *)(this + 0x28) = param_1;
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)this);
  }
  else {
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)this);
  }
  if (iVar2 == 0) {
    return;
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar3 = &PTR____concurrence_unlock_error_00927270;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&__gnu_cxx::__concurrence_unlock_error::typeinfo,
              __gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
}

