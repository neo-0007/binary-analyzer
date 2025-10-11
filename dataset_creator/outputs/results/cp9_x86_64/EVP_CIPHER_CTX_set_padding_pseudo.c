
int EVP_CIPHER_CTX_set_padding(EVP_CIPHER_CTX *c,int pad)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  uVar3 = c->flags | 0x100;
  if (pad != 0) {
    uVar3 = c->flags & 0xfffffffffffffeff;
  }
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  c->flags = uVar3;
  local_6c = pad;
  if ((c->cipher == (EVP_CIPHER *)0x0) || (c->cipher[1].do_cipher != (_func_1090 *)0x0)) {
    OSSL_PARAM_construct_uint(&local_a8,"padding",&local_6c);
    local_68._8_8_ = uStack_a0;
    local_68._0_8_ = local_a8;
    local_48._0_8_ = local_88;
    local_58._8_8_ = uStack_90;
    local_58._0_8_ = local_98;
    iVar1 = evp_do_ciph_ctx_setparams(c->cipher,c[1].cipher,local_68);
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
    uVar2 = 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

