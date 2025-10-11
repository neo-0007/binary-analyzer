
int FUN_006ccc50(undefined8 *param_1,long param_2,long *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 local_1b8 [8];
  int aiStack_1b0 [82];
  code *local_68;
  long local_50;
  
  lVar7 = 1;
  pcVar1 = (code *)param_1[2];
  uVar2 = param_1[3];
  do {
    iVar3 = FUN_006cc320(param_2,local_1b8);
    if ((iVar3 != 0) && (iVar3 != 5)) {
      return 2;
    }
    if (iVar3 == 5) {
      iVar4 = (*pcVar1)(1,0x1a,*param_1,param_1,param_2,uVar2);
      iVar3 = 5;
      if (iVar4 != 0) {
        return 2;
      }
LAB_006ccdb0:
      *param_3 = lVar7;
      return iVar3;
    }
    iVar3 = (*pcVar1)(1,10,*param_1,param_1,param_2,uVar2);
    if (iVar3 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      iVar3 = (*local_68)(1,10,*param_1,param_1,param_2);
      if (iVar3 == 7) goto LAB_006ccdb0;
      if (iVar3 != 8) {
        return 2;
      }
    }
    FUN_006cb630(param_2,local_1b8);
    puVar6 = (undefined8 *)0x0;
    if (aiStack_1b0[local_50 * 4] != 6) {
      if (0x11 < (int)local_50) {
FUN_004046a1:
                    /* WARNING: Subroutine does not return */
        FUN_00404713();
      }
      lVar5 = (long)(int)local_50;
      puVar6 = *(undefined8 **)(param_2 + lVar5 * 8);
      if (((*(byte *)(param_2 + 199) & 0x40) == 0) || (*(char *)(param_2 + 0xd8 + lVar5) == '\0')) {
        if ((&DAT_00945610)[lVar5] != '\b') goto FUN_004046a1;
        puVar6 = (undefined8 *)*puVar6;
      }
    }
    *(undefined8 **)(param_2 + 0x98) = puVar6;
    lVar7 = lVar7 + 1;
  } while( true );
}

