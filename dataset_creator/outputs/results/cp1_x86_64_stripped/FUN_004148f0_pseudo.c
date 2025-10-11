
undefined8 FUN_004148f0(int *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (((iVar1 - 0x10U & 0xffffffef) == 0 || (iVar1 - 0x40U & 0xffffffbf) == 0) || (iVar1 == 0x100)
       ) {
      if (*(long *)(param_1 + 0xc) == 0) {
        uVar3 = FUN_00414800(param_1,0xffffffff,0x1f0,0xd,0,param_2);
      }
      else {
        FUN_0041e290(&local_108,"digest",local_88,0x50);
        local_b8 = local_e8;
        local_d8 = local_108;
        uStack_d0 = uStack_100;
        local_c8 = local_f8;
        uStack_c0 = uStack_f0;
        FUN_0041e470(&local_108);
        local_b0 = local_108;
        uStack_a8 = uStack_100;
        local_90 = local_e8;
        local_a0 = local_f8;
        uStack_98 = uStack_f0;
        iVar1 = FUN_00413e50(param_1,&local_d8);
        if (iVar1 != 0) {
          lVar2 = FUN_0040d750(*(undefined8 *)(param_1 + 2),local_88);
          if (lVar2 != 0) {
            *param_2 = lVar2;
            uVar3 = 1;
            goto LAB_004149f8;
          }
        }
        uVar3 = 0;
      }
      goto LAB_004149f8;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/pmeth_lib.c",0x38e,"EVP_PKEY_CTX_get_signature_md");
  FUN_0051f8f0(6,0x93,0);
  uVar3 = 0xfffffffe;
LAB_004149f8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

