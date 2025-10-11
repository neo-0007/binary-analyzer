
int ASN1_mbstring_ncopy(ASN1_STRING **out,uchar *in,int len,int inform,ulong mask,long minsize,
                       long maxsize)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  ASN1_STRING *str;
  uint uVar5;
  undefined8 uVar6;
  code *pcVar7;
  uchar *str_00;
  uint len_00;
  long in_FS_OFFSET;
  ulong local_60 [2];
  uint local_4c;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = 0;
  local_60[0] = mask;
  if (len == -1) {
    sVar4 = strlen((char *)in);
    len = (int)sVar4;
  }
  if (local_60[0] == 0) {
    local_60[0] = 0x2806;
  }
  if (len < 0) {
LAB_00611dc0:
    iVar2 = -1;
    goto LAB_00611c5d;
  }
  if (inform == 0x1002) {
    if ((len & 1U) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_mbstr.c",0x42,"ASN1_mbstring_ncopy");
      iVar2 = -1;
      ERR_set_error(0xd,0x81,0);
      goto LAB_00611c5d;
    }
    uVar5 = len >> 1;
  }
  else if (inform < 0x1003) {
    if (inform == 0x1000) {
      uVar5 = 0;
      if (len != 0) {
        uVar5 = 0;
        str_00 = in;
        len_00 = len;
        do {
          iVar2 = UTF8_getc(str_00,len_00,(ulong *)&local_48);
          if (iVar2 < 0) {
LAB_00611d90:
            ERR_new();
            ERR_set_debug("../crypto/asn1/a_mbstr.c",0x55,"ASN1_mbstring_ncopy");
            ERR_set_error(0xd,0x86,0);
            goto LAB_00611dc0;
          }
          len_00 = len_00 - iVar2;
          str_00 = str_00 + iVar2;
          if (((uchar *)0x10ffff < local_48) || (local_48 + -0xd800 < (uchar *)0x800))
          goto LAB_00611d90;
          uVar5 = uVar5 + 1;
        } while (len_00 != 0);
      }
    }
    else {
      uVar5 = len;
      if (inform != 0x1001) goto LAB_00611df0;
    }
  }
  else {
    if (inform != 0x1004) {
LAB_00611df0:
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_mbstr.c",0x5f,"ASN1_mbstring_ncopy");
      iVar2 = -1;
      ERR_set_error(0xd,0xa0,0);
      goto LAB_00611c5d;
    }
    if ((len & 3U) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_mbstr.c",0x4a,"ASN1_mbstring_ncopy");
      iVar2 = -1;
      ERR_set_error(0xd,0x85,0);
      goto LAB_00611c5d;
    }
    uVar5 = len >> 2;
  }
  if ((0 < minsize) && ((int)uVar5 < minsize)) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_mbstr.c",100,"ASN1_mbstring_ncopy");
    iVar2 = -1;
    ERR_set_error(0xd,0x98,"minsize=%ld",minsize);
    goto LAB_00611c5d;
  }
  if ((0 < maxsize) && (maxsize < (int)uVar5)) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_mbstr.c",0x6a,"ASN1_mbstring_ncopy");
    iVar2 = -1;
    ERR_set_error(0xd,0x97,"maxsize=%ld",maxsize);
    goto LAB_00611c5d;
  }
  iVar2 = traverse_string(in,len,inform,type_str,local_60);
  if (iVar2 < 0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_mbstr.c",0x71,"ASN1_mbstring_ncopy");
    iVar2 = -1;
    ERR_set_error(0xd,0x7c,0);
    goto LAB_00611c5d;
  }
  if ((local_60[0] & 1) == 0) {
    if ((local_60[0] & 2) == 0) {
      if ((local_60[0] & 0x10) == 0) {
        if ((local_60[0] & 4) == 0) {
          if ((local_60[0] & 0x800) == 0) {
            iVar3 = (-(uint)((local_60[0] & 0x100) == 0) & 0xfffffffc) + 0x1004;
            iVar2 = (-(uint)((local_60[0] & 0x100) == 0) & 0xfffffff0) + 0x1c;
          }
          else {
            iVar3 = 0x1002;
            iVar2 = 0x1e;
          }
        }
        else {
          iVar3 = 0x1001;
          iVar2 = 0x14;
        }
      }
      else {
        iVar3 = 0x1001;
        iVar2 = 0x16;
      }
    }
    else {
      iVar3 = 0x1001;
      iVar2 = 0x13;
    }
  }
  else {
    iVar3 = 0x1001;
    iVar2 = 0x12;
  }
  if (out == (ASN1_STRING **)0x0) goto LAB_00611c5d;
  str = *out;
  if (str == (ASN1_STRING *)0x0) {
    str = ASN1_STRING_type_new(iVar2);
    if (str != (ASN1_STRING *)0x0) {
      bVar1 = true;
      *out = str;
      goto joined_r0x00611e5a;
    }
    ERR_new();
    uVar6 = 0x96;
  }
  else {
    CRYPTO_free(str->data);
    bVar1 = false;
    str->data = (uchar *)0x0;
    str->length = 0;
    str->type = iVar2;
joined_r0x00611e5a:
    if (iVar3 == inform) {
      iVar3 = ASN1_STRING_set(str,in,len);
      if (iVar3 != 0) goto LAB_00611c5d;
      ERR_new();
      uVar6 = 0x9e;
    }
    else {
      if (iVar3 == 0x1002) {
        local_4c = uVar5 * 2;
        pcVar7 = cpy_bmp;
      }
      else if (iVar3 < 0x1003) {
        if (iVar3 == 0x1000) {
          pcVar7 = cpy_utf8;
          local_4c = 0;
          traverse_string(in,len,inform,out_utf8,&local_4c);
        }
        else {
          if (iVar3 != 0x1001) goto LAB_00611eb0;
          pcVar7 = cpy_asc;
          local_4c = uVar5;
        }
      }
      else if (iVar3 == 0x1004) {
        local_4c = uVar5 << 2;
        pcVar7 = cpy_univ;
      }
      else {
LAB_00611eb0:
        pcVar7 = (code *)0x0;
      }
      local_48 = (uchar *)CRYPTO_malloc(local_4c + 1,"../crypto/asn1/a_mbstr.c",0xbb);
      if (local_48 != (uchar *)0x0) {
        str->data = local_48;
        str->length = local_4c;
        local_48[(int)local_4c] = '\0';
        traverse_string(in,len,inform,pcVar7,&local_48);
        goto LAB_00611c5d;
      }
      if (bVar1) {
        ASN1_STRING_free(str);
      }
      ERR_new();
      uVar6 = 0xbe;
    }
  }
  ERR_set_debug("../crypto/asn1/a_mbstr.c",uVar6,"ASN1_mbstring_ncopy");
  iVar2 = -1;
  ERR_set_error(0xd,0xc0100,0);
LAB_00611c5d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

