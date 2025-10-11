
int NAME_CONSTRAINTS_check_CN(X509 *param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  uchar *ptr;
  int lastpos;
  int iVar3;
  X509_NAME *name;
  X509_NAME_ENTRY *ne;
  ASN1_STRING *in;
  void *pvVar4;
  size_t sVar5;
  size_t __n;
  long in_FS_OFFSET;
  uchar *local_70;
  undefined4 local_68 [2];
  int *local_60;
  int local_58 [2];
  uchar *local_50;
  undefined8 local_48;
  long local_40;
  
  lastpos = -1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  name = X509_get_subject_name(param_1);
  local_58[1] = 0x16;
  local_60 = local_58;
  local_48 = 0;
  local_68[0] = 2;
LAB_0060d510:
  lastpos = X509_NAME_get_index_by_NID(name,0xd,lastpos);
  if (lastpos == -1) {
    iVar3 = 0;
  }
  else {
    ne = X509_NAME_get_entry(name,lastpos);
    in = X509_NAME_ENTRY_get_data(ne);
    iVar3 = ASN1_STRING_to_UTF8(&local_70,in);
    ptr = local_70;
    if (-1 < iVar3) {
      if (iVar3 != 0) {
        __n = (size_t)iVar3;
        do {
          if (local_70[__n - 1] != '\0') {
            pvVar4 = memchr(local_70,0,__n);
            if (pvVar4 == (void *)0x0) {
              sVar5 = 0;
              bVar2 = false;
              goto LAB_0060d600;
            }
            iVar3 = 0x35;
            CRYPTO_free(ptr);
            goto LAB_0060d59c;
          }
          __n = __n - 1;
        } while (__n != 0);
      }
      goto LAB_0060d5d0;
    }
    iVar3 = 0x11;
  }
  goto LAB_0060d59c;
LAB_0060d600:
  do {
    bVar1 = ptr[sVar5];
    if (((0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) && (9 < (byte)(bVar1 - 0x30))) && (bVar1 != 0x5f)) {
      if ((sVar5 == 0) || ((int)__n + -1 <= (int)sVar5)) goto LAB_0060d5d0;
      if (bVar1 != 0x2d) {
        if (((bVar1 != 0x2e) || (ptr[sVar5 + 1] == '.')) ||
           ((ptr[sVar5 - 1] == '-' || (ptr[sVar5 + 1] == '-')))) goto LAB_0060d5d0;
        bVar2 = true;
      }
    }
    sVar5 = sVar5 + 1;
  } while (__n != sVar5);
  if (bVar2) {
    local_50 = ptr;
    local_58[0] = (int)__n;
    iVar3 = nc_match(local_68,param_2);
    CRYPTO_free(ptr);
    if (iVar3 != 0) {
LAB_0060d59c:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      return iVar3;
    }
  }
  else {
LAB_0060d5d0:
    CRYPTO_free(ptr);
  }
  goto LAB_0060d510;
}

