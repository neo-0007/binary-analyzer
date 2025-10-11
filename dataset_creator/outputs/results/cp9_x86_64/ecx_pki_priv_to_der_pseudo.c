
int ecx_pki_priv_to_der(long param_1,uchar **param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  ASN1_OCTET_STRING local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (*(uchar **)(param_1 + 0x50) == (uchar *)0x0)) {
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x30d,
                  "ecx_pki_priv_to_der");
    ERR_set_error(0x39,0xc0102,0);
    iVar1 = 0;
  }
  else {
    local_28.flags = 0;
    local_28.length = (int)*(undefined8 *)(param_1 + 0x58);
    local_28.data = *(uchar **)(param_1 + 0x50);
    iVar1 = i2d_ASN1_OCTET_STRING(&local_28,param_2);
    if (iVar1 < 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x317,
                    "ecx_pki_priv_to_der");
      ERR_set_error(0x39,0xc0100,0);
      iVar1 = 0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

