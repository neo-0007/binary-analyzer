
undefined8
FUN_004194d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined1 *local_a0;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_00417930();
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar3 = (undefined8 *)FUN_00418ef0(puVar2,param_2), puVar3 == (undefined8 *)0x0)) {
LAB_00419660:
    uVar4 = 0;
  }
  else {
    *param_4 = param_1;
    uVar4 = *puVar3;
    param_4[1] = 0;
    iVar1 = FUN_00436480(uVar4);
    if (iVar1 < 1) {
      puVar5 = (undefined1 *)0x0;
      FUN_004222e0(*puVar2);
    }
    else {
      if (iVar1 < 10) {
        puVar5 = local_98;
      }
      else {
        puVar5 = (undefined1 *)FUN_0041ad90((long)iVar1 * 8,"../crypto/ex_data.c",0xeb);
        if (puVar5 == (undefined1 *)0x0) {
          FUN_004222e0(*puVar2);
          FUN_0051f420();
          FUN_0051f540("../crypto/ex_data.c",0xf3,"ossl_crypto_new_ex_data_ex");
          FUN_0051f8f0(0xf,0xc0100,0);
          goto LAB_00419660;
        }
      }
      local_a0 = local_98;
      uVar6 = 0;
      do {
        uVar4 = FUN_004364a0(*puVar3,uVar6 & 0xffffffff);
        *(undefined8 *)(puVar5 + uVar6 * 8) = uVar4;
        uVar6 = uVar6 + 1;
      } while ((long)iVar1 != uVar6);
      uVar6 = 0;
      FUN_004222e0(*puVar2);
      do {
        if ((*(long *)(puVar5 + uVar6 * 8) != 0) &&
           (*(long *)(*(long *)(puVar5 + uVar6 * 8) + 0x18) != 0)) {
          uVar4 = FUN_00419480(param_4,uVar6 & 0xffffffff);
          puVar2 = *(undefined8 **)(puVar5 + uVar6 * 8);
          (*(code *)puVar2[3])(param_3,uVar4,param_4,uVar6 & 0xffffffff,*puVar2,puVar2[1]);
        }
        uVar6 = uVar6 + 1;
      } while ((long)iVar1 != uVar6);
      uVar4 = 1;
      if (puVar5 == local_a0) goto LAB_00419662;
    }
    FUN_0041ad60(puVar5,"../crypto/ex_data.c",0xfe);
    uVar4 = 1;
  }
LAB_00419662:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

