
void RC2_ecb_encrypt(uchar *in,uchar *out,RC2_KEY *key,int enc)

{
  long in_FS_OFFSET;
  ulong local_28;
  ulong local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (ulong)*(uint *)in;
  local_20 = (ulong)*(uint *)(in + 4);
  if (enc == 0) {
    RC2_decrypt(&local_28,key);
  }
  else {
    RC2_encrypt(&local_28,key);
  }
  *(undefined4 *)out = (undefined4)local_28;
  *(undefined4 *)(out + 4) = (undefined4)local_20;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

