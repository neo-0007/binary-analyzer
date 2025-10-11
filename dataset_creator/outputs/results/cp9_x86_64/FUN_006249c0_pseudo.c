
void FUN_006249c0(void)

{
  facet *pfVar1;
  long lVar2;
  facet *this;
  int iVar3;
  long unaff_RBX;
  ulong unaff_RBP;
  char *unaff_R13;
  long unaff_R14;
  code *unaff_R15;
  
  do {
    lVar2 = *(long *)(unaff_RBX + 0x18);
    *(undefined8 *)(lVar2 + unaff_R14) = 0;
    do {
      unaff_RBP = unaff_RBP + 1;
      if (*(ulong *)(unaff_RBX + 0x10) <= unaff_RBP) {
        return;
      }
      this = *(facet **)(lVar2 + unaff_RBP * 8);
      unaff_R14 = unaff_RBP * 8;
    } while (this == (facet *)0x0);
    if (*unaff_R13 == '\0') {
      LOCK();
      pfVar1 = this + 8;
      iVar3 = *(int *)pfVar1;
      *(int *)pfVar1 = *(int *)pfVar1 + -1;
      UNLOCK();
    }
    else {
      iVar3 = *(int *)(this + 8);
      *(int *)(this + 8) = iVar3 + -1;
    }
    if (iVar3 == 1) {
      if (*(code **)(*(long *)this + 8) == unaff_R15) {
                    /* try { // try from 00624a14 to 00624a18 has its CatchHandler @ 00624bde */
        std::locale::facet::~facet(this);
        operator_delete(this);
      }
      else {
                    /* try { // try from 00624ac0 to 00624ac1 has its CatchHandler @ 00624bec */
        (**(code **)(*(long *)this + 8))();
      }
    }
  } while( true );
}

