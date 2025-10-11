
void FUN_0040224a(void)

{
  facet *pfVar1;
  facet *this;
  int iVar2;
  long lVar3;
  long unaff_RBX;
  ulong uVar4;
  undefined8 unaff_R12;
  char *unaff_R13;
  undefined8 *unaff_R14;
  void *unaff_R15;
  
  operator_delete(unaff_R15);
  __cxa_begin_catch();
                    /* try { // try from 0040225a to 0040225e has its CatchHandler @ 00402279 */
  __cxa_end_catch();
  lVar3 = *(long *)(unaff_RBX + 0x10);
  *unaff_R14 = unaff_R12;
  if (lVar3 != 0) {
    lVar3 = *(long *)(unaff_RBX + 0x18);
    uVar4 = 0;
    do {
      this = *(facet **)(lVar3 + uVar4 * 8);
      if (this != (facet *)0x0) {
        if (*unaff_R13 == '\0') {
          LOCK();
          pfVar1 = this + 8;
          iVar2 = *(int *)pfVar1;
          *(int *)pfVar1 = *(int *)pfVar1 + -1;
          UNLOCK();
        }
        else {
          iVar2 = *(int *)(this + 8);
          *(int *)(this + 8) = iVar2 + -1;
        }
        if (iVar2 == 1) {
          if (*(code **)(*(long *)this + 8) == std::locale::facet::~facet) {
            std::locale::facet::~facet(this);
            operator_delete(this);
          }
          else {
            (**(code **)(*(long *)this + 8))();
          }
        }
        lVar3 = *(long *)(unaff_RBX + 0x18);
        *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulong *)(unaff_RBX + 0x10));
  }
  return;
}

