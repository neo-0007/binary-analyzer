
undefined8 FUN_00457550(long param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined4 local_28 [2];
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (*(long *)(param_1 + 0x50) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x30d,
                 "ecx_pki_priv_to_der");
    FUN_0051f8f0(0x39,0xc0102,0);
    uVar1 = 0;
  }
  else {
    local_18 = 0;
    local_28[0] = (undefined4)*(undefined8 *)(param_1 + 0x58);
    local_20 = *(long *)(param_1 + 0x50);
    uVar1 = FUN_004a7640(local_28);
    if ((int)uVar1 < 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/encode_decode/encode_key2any.c",0x317,
                   "ecx_pki_priv_to_der");
      FUN_0051f8f0(0x39,0xc0100,0);
      uVar1 = 0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

