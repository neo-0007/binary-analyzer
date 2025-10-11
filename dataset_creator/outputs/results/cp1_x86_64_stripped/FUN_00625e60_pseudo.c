
void FUN_00625e60(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
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
      plVar3 = *(long **)(lVar2 + unaff_RBP * 8);
      unaff_R14 = unaff_RBP * 8;
    } while (plVar3 == (long *)0x0);
    if (*unaff_R13 == '\0') {
      LOCK();
      plVar1 = plVar3 + 1;
      iVar4 = (int)*plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
    }
    else {
      iVar4 = (int)plVar3[1];
      *(int *)(plVar3 + 1) = iVar4 + -1;
    }
    if (iVar4 == 1) {
      if (*(code **)(*plVar3 + 8) == unaff_R15) {
                    /* try { // try from 00625eb4 to 00625eb8 has its CatchHandler @ 0062607e */
        FUN_00625090();
        thunk_FUN_007104f0(plVar3);
      }
      else {
                    /* try { // try from 00625f60 to 00625f61 has its CatchHandler @ 0062608c */
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  } while( true );
}

