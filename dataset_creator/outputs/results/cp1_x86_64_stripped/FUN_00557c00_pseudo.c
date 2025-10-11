
uint FUN_00557c00(undefined8 param_1,undefined8 param_2,int param_3,int param_4,long param_5,
                 long param_6,int param_7,code *param_8,long param_9)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long extraout_RDX;
  long in_FS_OFFSET;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar7 = "DER";
  if (param_3 == 0) {
    pcVar7 = "PEM";
  }
  lVar3 = FUN_00518970(param_2,0x87,pcVar7,"PrivateKeyInfo",0);
  if (lVar3 == 0) {
    uVar1 = 0;
    goto LAB_00557d7e;
  }
  if (param_6 == 0 && param_8 == (code *)0x0) {
    if (param_9 == 0) {
      param_8 = FUN_005551d0;
      param_6 = 0;
    }
    else {
      param_8 = (code *)0x0;
      param_7 = thunk_FUN_007129d0(param_9);
      param_6 = param_9;
    }
  }
  if (param_4 == -1) {
    iVar2 = FUN_00516aa0(lVar3);
    if (iVar2 == 0) {
      lVar4 = FUN_005fe170(param_2);
      if (lVar4 == 0) goto LAB_00557d38;
      if (param_5 != 0) goto LAB_00557cc0;
      if (param_3 == 0) {
        uVar1 = FUN_00557bc0(param_1,lVar4);
      }
      else {
        uVar1 = FUN_005ab890();
      }
      goto LAB_00557d6e;
    }
    if (param_5 == 0) {
LAB_00557f38:
      iVar2 = FUN_00517230(lVar3,param_1);
      uVar1 = (uint)(iVar2 != 0);
    }
    else {
      uVar6 = FUN_0040a3d0(param_5);
      iVar2 = FUN_00518860(lVar3,uVar6,0);
      if (((iVar2 != 0) &&
          ((param_6 == 0 || (iVar2 = FUN_00518930(lVar3,param_6,(long)param_7), iVar2 != 0)))) &&
         ((param_8 == (code *)0x0 || (iVar2 = FUN_00518950(lVar3,param_8,param_9), iVar2 != 0))))
      goto LAB_00557f38;
      uVar1 = 0;
    }
  }
  else {
    lVar4 = FUN_005fe170(param_2);
    if (lVar4 == 0) {
LAB_00557d38:
      FUN_0051f420();
      uVar1 = 0;
      FUN_0051f540("../crypto/pem/pem_pk8.c",0x85,"do_pk8pkey");
      FUN_0051f8f0(9,0x73,0);
      lVar4 = 0;
    }
    else {
LAB_00557cc0:
      if (param_6 == 0) {
        iVar2 = (*param_8)(local_448,0x400,1,param_9);
        if (iVar2 < 0) {
          uVar1 = 0;
          FUN_0051f420();
          FUN_0051f540("../crypto/pem/pem_pk8.c",0x8c,"do_pk8pkey");
          FUN_0051f8f0(9,0x6f,0);
          goto LAB_00557d6e;
        }
        lVar5 = FUN_0055cc90(param_4,param_5,local_448,iVar2,0,0,0,lVar4);
        FUN_004227b0(local_448,(long)iVar2);
        lVar8 = extraout_RDX;
      }
      else {
        lVar8 = lVar4;
        lVar5 = FUN_0055cc90(param_4,param_5,param_6,param_7,0,0,0);
      }
      if (lVar5 == 0) {
        uVar1 = 0;
      }
      else {
        if (param_3 == 0) {
          uVar1 = FUN_00557ae0(param_1,lVar5,lVar8);
        }
        else {
          uVar1 = FUN_005ab6d0();
        }
        FUN_004a9460(lVar5);
      }
    }
LAB_00557d6e:
    FUN_004a2c30(lVar4);
  }
  FUN_00518590(lVar3);
LAB_00557d7e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar1;
}

