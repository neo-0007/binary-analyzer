
long FUN_005ba8a0(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_005ba3d0(0,param_1,param_2,param_3,param_4,param_5);
  if (lVar2 == 0) {
    local_48 = *param_2;
    uVar3 = FUN_004a81c0(0,&local_48,param_3);
    local_48 = *param_2;
    iVar1 = FUN_00436480(uVar3);
    if (iVar1 == 6) {
      uVar5 = 0x74;
    }
    else {
      iVar1 = FUN_00436480(uVar3);
      uVar5 = 0x198;
      if (iVar1 != 4) {
        iVar1 = FUN_00436480(uVar3);
        uVar5 = 6;
        if (iVar1 == 3) {
          lVar4 = FUN_004a2bb0(0,&local_48,param_3);
          FUN_00436430(uVar3,FUN_004a7f30);
          if (lVar4 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/d2i_pr.c",0xc3,"d2i_AutoPrivateKey_legacy");
            FUN_0051f8f0(0xd,0xa7,0);
          }
          else {
            lVar2 = FUN_005fde40(lVar4,param_4,param_5);
            FUN_004a2c30(lVar4);
            if ((lVar2 != 0) && (*param_2 = local_48, param_1 != (long *)0x0)) {
              *param_1 = lVar2;
            }
          }
          goto LAB_005ba8ef;
        }
      }
    }
    FUN_00436430(uVar3,FUN_004a7f30);
    lVar2 = FUN_005ba5a0(uVar5,param_1,param_2,param_3,param_4,param_5);
  }
LAB_005ba8ef:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

