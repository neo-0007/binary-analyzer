
int FUN_004d69f0(long param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long in_FS_OFFSET;
  undefined1 local_44 [4];
  long local_40;
  
  piVar2 = *(int **)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = piVar2[8];
  if (iVar8 != 0) {
    uVar3 = 0x1c;
    if (iVar8 < 4) {
      uVar3 = 0x398;
    }
    lVar4 = FUN_004d4a70(iVar8);
    if (lVar4 != 0) {
      iVar8 = 1;
      FUN_0040f1c0(param_2,uVar3,lVar4);
      goto LAB_004d6a5c;
    }
LAB_004d6b00:
    iVar8 = 0;
    goto LAB_004d6a5c;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    iVar8 = piVar2[2];
    lVar4 = 0;
    if (iVar8 < 1) goto LAB_004d6ab1;
LAB_004d6b1a:
    iVar1 = *piVar2;
    iVar7 = piVar2[3];
    if ((2 < iVar8) || (lVar5 = FUN_004d5e70(), lVar5 == 0)) goto LAB_004d6bd8;
    if ((iVar7 == -1) && (iVar7 = 0xa0, 0x7ff < iVar1)) {
      iVar7 = 0x100;
    }
    if (*(long *)(piVar2 + 6) != 0) {
      uVar6 = FUN_0040ab30();
      FUN_00542190(lVar5 + 8,uVar6,0);
    }
    if (piVar2[2] == 1) {
      iVar8 = FUN_005448c0(0,lVar5 + 8,1,(long)iVar1,(long)iVar7,local_44,lVar4);
LAB_004d6ba8:
      if (0 < iVar8) {
        iVar8 = 1;
        FUN_004b7e40(lVar4);
        FUN_0040f1c0(param_2,0x398,lVar5);
        goto LAB_004d6a5c;
      }
    }
    else if (0 < piVar2[2]) {
      iVar8 = FUN_00544890(0,lVar5 + 8,1,(long)iVar1,(long)iVar7,local_44);
      goto LAB_004d6ba8;
    }
    FUN_004d5b70(lVar5);
  }
  else {
    lVar4 = FUN_004b7dd0();
    if (lVar4 == 0) goto LAB_004d6b00;
    FUN_00412200(lVar4,param_1);
    iVar8 = piVar2[2];
    if (0 < iVar8) goto LAB_004d6b1a;
LAB_004d6ab1:
    lVar5 = FUN_004d5e70();
    if (lVar5 != 0) {
      iVar8 = FUN_004d4660(lVar5,*piVar2,piVar2[1],lVar4);
      FUN_004b7e40(lVar4);
      if (iVar8 == 0) {
        FUN_004d5b70(lVar5);
      }
      else {
        FUN_0040f1c0(param_2,0x1c,lVar5);
      }
      goto LAB_004d6a5c;
    }
  }
LAB_004d6bd8:
  FUN_004b7e40(lVar4);
  iVar8 = 0;
LAB_004d6a5c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar8;
}

