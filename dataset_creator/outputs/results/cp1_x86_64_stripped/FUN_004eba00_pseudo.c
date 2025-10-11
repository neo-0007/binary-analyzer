
uint FUN_004eba00(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  uVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = 0;
  lVar3 = FUN_004ee2d0();
  if (lVar3 == 0) goto LAB_004ebae1;
  lVar4 = thunk_FUN_0041cdd0(param_2,&DAT_007ce5e4);
  local_60 = 0;
  if (param_3 != 0) {
    local_60 = thunk_FUN_0041cdd0(param_2,&DAT_007ce5df);
  }
  uVar5 = FUN_004ee2a0(param_1);
  lVar6 = FUN_004b2a70(uVar5);
  if (lVar6 == 0) {
LAB_004ebaac:
    uVar2 = 0;
    lVar4 = 0;
  }
  else {
    if (lVar4 != 0) {
      iVar1 = FUN_0041e150(lVar4,&local_50,0,&local_48);
      if (iVar1 != 0) {
        lVar4 = FUN_004efb90(lVar3);
        if (lVar4 != 0) {
          uVar2 = FUN_004f4d10(lVar3,lVar4,local_50,local_48,lVar6);
          if (uVar2 != 0) goto LAB_004ebb43;
          goto LAB_004ebab1;
        }
      }
      goto LAB_004ebaac;
    }
LAB_004ebb43:
    if ((local_60 == 0) || (param_3 == 0)) {
LAB_004ebb4f:
      if (local_58 != 0) {
        uVar2 = FUN_004ee2f0(param_1);
        if (uVar2 == 0) goto LAB_004ebab1;
      }
      uVar2 = 1;
      if (lVar4 != 0) {
        iVar1 = FUN_004ee400(param_1,lVar4);
        uVar2 = (uint)(iVar1 != 0);
      }
    }
    else {
      uVar2 = 0;
      lVar3 = FUN_004ef7e0(lVar3);
      if (lVar3 != 0) {
        iVar1 = FUN_004b7ba0(lVar3);
        if (iVar1 == 0) {
          iVar1 = FUN_004b7380(lVar3);
          local_58 = FUN_004b7700();
          uVar2 = 0;
          if (local_58 != 0) {
            lVar3 = FUN_004b8240(local_58,iVar1 + 2);
            if (lVar3 != 0) {
              FUN_004b7e70(local_58,4);
              iVar1 = FUN_0041dc20(local_60,&local_58);
              if (iVar1 != 0) goto LAB_004ebb4f;
              uVar2 = 0;
            }
          }
        }
        else {
          uVar2 = 0;
        }
      }
    }
  }
LAB_004ebab1:
  FUN_004b2b50(lVar6);
  FUN_004b7f20(local_58);
  FUN_0041ad60(local_50,"../crypto/ec/ec_backend.c",0x1e9);
  FUN_004efcc0(lVar4);
LAB_004ebae1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

