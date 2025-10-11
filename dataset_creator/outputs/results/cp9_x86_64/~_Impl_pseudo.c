
/* std::locale::_Impl::~_Impl() */

void __thiscall std::locale::_Impl::~_Impl(_Impl *this)

{
  facet *pfVar1;
  facet *pfVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)(this + 0x10) != 0) {
      uVar4 = 0;
      do {
        pfVar2 = *(facet **)((long)pvVar6 + uVar4 * 8);
        if (pfVar2 != (facet *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            pfVar1 = pfVar2 + 8;
            iVar3 = *(int *)pfVar1;
            *(int *)pfVar1 = *(int *)pfVar1 + -1;
            UNLOCK();
          }
          else {
            iVar3 = *(int *)(pfVar2 + 8);
            *(int *)(pfVar2 + 8) = iVar3 + -1;
          }
          if (iVar3 == 1) {
            if (*(code **)(*(long *)pfVar2 + 8) == facet::~facet) {
                    /* try { // try from 006242bd to 006242c1 has its CatchHandler @ 0062441b */
              facet::~facet(pfVar2);
              operator_delete(pfVar2);
            }
            else {
                    /* try { // try from 006243f0 to 006243f1 has its CatchHandler @ 00624403 */
              (**(code **)(*(long *)pfVar2 + 8))();
            }
          }
          pvVar6 = *(void **)(this + 8);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ulong *)(this + 0x10));
      if (pvVar6 == (void *)0x0) goto LAB_006242da;
    }
    operator_delete__(pvVar6);
  }
LAB_006242da:
  pvVar6 = *(void **)(this + 0x18);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)(this + 0x10) != 0) {
      uVar4 = 0;
      do {
        pfVar2 = *(facet **)((long)pvVar6 + uVar4 * 8);
        if (pfVar2 != (facet *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            pfVar1 = pfVar2 + 8;
            iVar3 = *(int *)pfVar1;
            *(int *)pfVar1 = *(int *)pfVar1 + -1;
            UNLOCK();
          }
          else {
            iVar3 = *(int *)(pfVar2 + 8);
            *(int *)(pfVar2 + 8) = iVar3 + -1;
          }
          if (iVar3 == 1) {
            if (*(code **)(*(long *)pfVar2 + 8) == facet::~facet) {
                    /* try { // try from 00624345 to 00624349 has its CatchHandler @ 0062440f */
              facet::~facet(pfVar2);
              operator_delete(pfVar2);
            }
            else {
                    /* try { // try from 006243e8 to 006243e9 has its CatchHandler @ 006243f7 */
              (**(code **)(*(long *)pfVar2 + 8))();
            }
          }
          pvVar6 = *(void **)(this + 0x18);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ulong *)(this + 0x10));
      if (pvVar6 == (void *)0x0) goto LAB_00624362;
    }
    operator_delete__(pvVar6);
  }
LAB_00624362:
  pvVar6 = *(void **)(this + 0x20);
  lVar5 = 0;
  if (pvVar6 != (void *)0x0) {
    do {
      if (*(void **)((long)pvVar6 + lVar5) != (void *)0x0) {
        operator_delete__(*(void **)((long)pvVar6 + lVar5));
        pvVar6 = *(void **)(this + 0x20);
      }
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x60);
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
      return;
    }
  }
  return;
}

