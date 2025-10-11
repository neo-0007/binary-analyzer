
void FUN_004021ca(void)

{
  facet *pfVar1;
  facet *pfVar2;
  int iVar3;
  ulong unaff_RBX;
  ulong uVar4;
  long lVar5;
  long unaff_RBP;
  void *pvVar6;
  void *unaff_R12;
  code *unaff_R13;
  
  operator_delete(unaff_R12);
  __cxa_begin_catch();
                    /* try { // try from 004021da to 004021de has its CatchHandler @ 004021fd */
  __cxa_end_catch();
  pvVar6 = *(void **)(unaff_RBP + 8);
  while (unaff_RBX = unaff_RBX + 1, unaff_RBX < *(ulong *)(unaff_RBP + 0x10)) {
    pfVar2 = *(facet **)((long)pvVar6 + unaff_RBX * 8);
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
        if (*(code **)(*(long *)pfVar2 + 8) == unaff_R13) {
          std::locale::facet::~facet(pfVar2);
          operator_delete(pfVar2);
        }
        else {
          (**(code **)(*(long *)pfVar2 + 8))();
        }
      }
      pvVar6 = *(void **)(unaff_RBP + 8);
    }
  }
  if (pvVar6 != (void *)0x0) {
    operator_delete__(pvVar6);
  }
  pvVar6 = *(void **)(unaff_RBP + 0x18);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)(unaff_RBP + 0x10) != 0) {
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
            if (*(code **)(*(long *)pfVar2 + 8) == std::locale::facet::~facet) {
              std::locale::facet::~facet(pfVar2);
              operator_delete(pfVar2);
            }
            else {
              (**(code **)(*(long *)pfVar2 + 8))();
            }
          }
          pvVar6 = *(void **)(unaff_RBP + 0x18);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ulong *)(unaff_RBP + 0x10));
      if (pvVar6 == (void *)0x0) goto LAB_00624362;
    }
    operator_delete__(pvVar6);
  }
LAB_00624362:
  pvVar6 = *(void **)(unaff_RBP + 0x20);
  lVar5 = 0;
  if (pvVar6 != (void *)0x0) {
    do {
      if (*(void **)((long)pvVar6 + lVar5) != (void *)0x0) {
        operator_delete__(*(void **)((long)pvVar6 + lVar5));
        pvVar6 = *(void **)(unaff_RBP + 0x20);
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

