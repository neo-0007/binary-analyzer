
int EVP_Cipher(EVP_CIPHER_CTX *c,uchar *out,uchar *in,uint inl)

{
  EVP_CIPHER *pEVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (c->cipher[1].do_cipher == (_func_1090 *)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0040e241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*c->cipher->cleanup)(c);
      return iVar2;
    }
  }
  else {
    local_28 = 0;
    iVar2 = EVP_CIPHER_CTX_get_block_size();
    lVar5 = (long)iVar2;
    pEVar1 = c->cipher;
    if (*(code **)&pEVar1[2].key_len == (code *)0x0) {
      if (in == (uchar *)0x0) {
        if (lVar5 == 1) {
          lVar5 = 0;
        }
        iVar2 = (**(code **)(pEVar1 + 2))(c[1].cipher,out,&local_28,lVar5);
      }
      else {
        uVar4 = lVar5 + (ulong)inl;
        if (lVar5 == 1) {
          uVar4 = (ulong)inl;
        }
        iVar2 = (*(code *)pEVar1[1].app_data)(c[1].cipher,out,&local_28,uVar4,in);
      }
    }
    else {
      uVar4 = lVar5 + (ulong)inl;
      if (lVar5 == 1) {
        uVar4 = (ulong)inl;
      }
      iVar3 = (**(code **)&pEVar1[2].key_len)(c[1].cipher,out,&local_28,uVar4,in);
      iVar2 = -1;
      if (iVar3 != 0) {
        iVar2 = (int)local_28;
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

