
uchar * HMAC(EVP_MD *evp_md,void *key,int key_len,uchar *d,size_t n,uchar *md,uint *md_len)

{
  int iVar1;
  undefined8 uVar2;
  uchar *puVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_MD_get_size();
  puVar3 = (uchar *)0x0;
  local_48 = 0;
  if (-1 < iVar1) {
    if (md == (uchar *)0x0) {
      md = static_md_0;
    }
    uVar2 = EVP_MD_get0_name(evp_md);
    puVar3 = (uchar *)EVP_Q_mac(0,&DAT_007c9964,0,uVar2,0,key,(long)key_len,d,n,md,(long)iVar1,
                                &local_48);
    if (md_len != (uint *)0x0) {
      *md_len = (uint)local_48;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

