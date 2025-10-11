
uint FUN_00444aa0(long param_1,long param_2,ulong *param_3,ulong param_4,long param_5,ulong param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  ulong *puVar8;
  long in_FS_OFFSET;
  long local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(byte *)(param_1 + 0x364) & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x360), iVar1 != 3))
     && (iVar1 != 0)) {
    if (iVar1 == 1) {
      iVar1 = FUN_00551ad0(param_1 + 0x2b0,param_1 + 0x94,*(undefined8 *)(param_1 + 0x20),
                           *(undefined8 *)(param_1 + 0x368));
      if (iVar1 != 1) goto LAB_00444acb;
      *(undefined4 *)(param_1 + 0x360) = 2;
    }
    if (param_6 == 0) {
      *param_3 = 0;
      uVar2 = 1;
      goto LAB_00444ace;
    }
    lVar6 = param_1 + 0x390;
    puVar8 = (ulong *)(param_1 + 0x370);
    pcVar7 = FUN_004447b0;
    if (param_2 == 0) {
      lVar6 = param_1 + 0x3a0;
      puVar8 = (ulong *)(param_1 + 0x378);
      pcVar7 = FUN_004444f0;
    }
    uVar5 = *puVar8;
    uVar4 = param_6 & 0xfffffffffffffff0;
    local_50 = param_5;
    local_48 = param_6;
    if (uVar5 == 0) {
LAB_00444b5f:
      if (uVar4 != 0) {
        uVar5 = uVar5 + uVar4;
        if (param_4 < uVar5) {
          FUN_0051f420();
          uVar3 = 0xbe;
          goto LAB_00444d99;
        }
        iVar1 = (*pcVar7)(param_1,local_50,param_2,uVar4);
        if (iVar1 == 0) {
          FUN_0051f420();
          uVar3 = 0xc2;
          goto LAB_00444d61;
        }
        local_50 = local_50 + uVar4;
        local_48 = local_48 - uVar4;
      }
      if ((local_48 == 0) ||
         (uVar2 = FUN_00486a40(lVar6,puVar8,0x10,&local_50,&local_48), uVar2 != 0)) {
        *param_3 = uVar5;
        uVar2 = (uint)(local_48 == 0);
      }
      goto LAB_00444ace;
    }
    uVar4 = FUN_004869e0(lVar6,puVar8,0x10,&local_50,&local_48);
    if (*puVar8 != 0x10) {
      uVar5 = 0;
      goto LAB_00444b5f;
    }
    if (0xf < param_4) {
      iVar1 = (*pcVar7)(param_1,lVar6,param_2,0x10);
      if (iVar1 != 0) {
        *puVar8 = 0;
        if (param_2 != 0) {
          param_2 = param_2 + 0x10;
        }
        uVar5 = 0x10;
        goto LAB_00444b5f;
      }
      FUN_0051f420();
      uVar3 = 0xb3;
LAB_00444d61:
      uVar2 = 0;
      FUN_0051f540("../providers/implementations/ciphers/cipher_aes_ocb.c",uVar3,
                   "aes_ocb_block_update_internal");
      FUN_0051f8f0(0x39,0x66,0);
      goto LAB_00444ace;
    }
    FUN_0051f420();
    uVar3 = 0xaf;
LAB_00444d99:
    FUN_0051f540("../providers/implementations/ciphers/cipher_aes_ocb.c",uVar3,
                 "aes_ocb_block_update_internal");
    FUN_0051f8f0(0x39,0x6a,0);
  }
LAB_00444acb:
  uVar2 = 0;
LAB_00444ace:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

