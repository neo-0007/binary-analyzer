
ASN1_INTEGER * d2i_ASN1_UINTEGER(ASN1_INTEGER **a,uchar **pp,long length)

{
  uint uVar1;
  uchar *__dest;
  ASN1_INTEGER *a_00;
  undefined4 uVar2;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  uchar *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if ((a == (ASN1_INTEGER **)0x0) || (a_00 = *a, a_00 == (ASN1_INTEGER *)0x0)) {
    a_00 = ASN1_INTEGER_new();
    if (a_00 != (ASN1_INTEGER *)0x0) {
      a_00->type = 2;
      local_40 = *pp;
      uVar1 = ASN1_get_object(&local_40,&local_38,&local_48,&local_44,length);
      if ((uVar1 & 0x80) == 0) {
        if (local_48 == 2) {
          if (local_38 < 0) {
            uVar2 = 0xe2;
          }
          else {
            __dest = (uchar *)CRYPTO_malloc((int)local_38 + 1,"../crypto/asn1/a_int.c",0x1b0);
            if (__dest != (uchar *)0x0) goto LAB_0049cf4f;
            uVar2 = 0xc0100;
          }
        }
        else {
          uVar2 = 0x73;
        }
      }
      else {
        uVar2 = 0x66;
      }
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_int.c",0x1c7,"d2i_ASN1_UINTEGER");
      ERR_set_error(0xd,uVar2,0);
      if ((a == (ASN1_INTEGER **)0x0) || (*a != a_00)) goto LAB_0049d0b5;
    }
  }
  else {
    local_40 = *pp;
    uVar1 = ASN1_get_object(&local_40,&local_38,&local_48,&local_44,length);
    if ((uVar1 & 0x80) == 0) {
      if (local_48 == 2) {
        if (local_38 < 0) {
          ERR_new();
          ERR_set_debug("../crypto/asn1/a_int.c",0x1c7,"d2i_ASN1_UINTEGER");
          ERR_set_error(0xd,0xe2,0);
        }
        else {
          __dest = (uchar *)CRYPTO_malloc((int)local_38 + 1,"../crypto/asn1/a_int.c",0x1b0);
          if (__dest != (uchar *)0x0) {
LAB_0049cf4f:
            a_00->type = 2;
            if (local_38 != 0) {
              if ((*local_40 == '\0') && (local_38 != 1)) {
                local_40 = local_40 + 1;
                local_38 = local_38 + -1;
              }
              memcpy(__dest,local_40,(long)(int)local_38);
              local_40 = local_40 + local_38;
            }
            CRYPTO_free(a_00->data);
            a_00->data = __dest;
            a_00->length = (int)local_38;
            if (a != (ASN1_INTEGER **)0x0) {
              *a = a_00;
            }
            *pp = local_40;
            goto LAB_0049d053;
          }
          ERR_new();
          ERR_set_debug("../crypto/asn1/a_int.c",0x1c7,"d2i_ASN1_UINTEGER");
          ERR_set_error(0xd,0xc0100,0);
        }
      }
      else {
        ERR_new();
        ERR_set_debug("../crypto/asn1/a_int.c",0x1c7,"d2i_ASN1_UINTEGER");
        ERR_set_error(0xd,0x73,0);
      }
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_int.c",0x1c7,"d2i_ASN1_UINTEGER");
      ERR_set_error(0xd,0x66,0);
    }
    if (*a != a_00) {
LAB_0049d0b5:
      ASN1_INTEGER_free(a_00);
    }
  }
  a_00 = (ASN1_INTEGER *)0x0;
LAB_0049d053:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return a_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

