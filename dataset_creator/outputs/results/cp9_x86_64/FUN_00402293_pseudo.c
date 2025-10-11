
void FUN_00402293(void)

{
  facet *pfVar1;
  facet *pfVar2;
  int iVar3;
  long lVar4;
  long unaff_RBX;
  undefined8 *unaff_RBP;
  ulong uVar5;
  undefined8 unaff_R12;
  char *unaff_R13;
  undefined8 *unaff_R14;
  void *unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  operator_delete(unaff_R15);
  __cxa_begin_catch(in_stack_00000010);
                    /* try { // try from 004022a5 to 004022a9 has its CatchHandler @ 00402310 */
  __cxa_end_catch();
  *unaff_RBP = in_stack_00000008;
  pfVar2 = (facet *)*unaff_R14;
  if (*unaff_R13 == '\0') {
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
  lVar4 = *(long *)(unaff_RBX + 0x10);
  *unaff_R14 = unaff_R12;
  if (lVar4 != 0) {
    lVar4 = *(long *)(unaff_RBX + 0x18);
    uVar5 = 0;
    do {
      pfVar2 = *(facet **)(lVar4 + uVar5 * 8);
      if (pfVar2 != (facet *)0x0) {
        if (*unaff_R13 == '\0') {
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
        lVar4 = *(long *)(unaff_RBX + 0x18);
        *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulong *)(unaff_RBX + 0x10));
  }
  return;
}

