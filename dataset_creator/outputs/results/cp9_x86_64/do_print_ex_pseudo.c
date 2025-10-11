
int do_print_ex(code *param_1,long param_2,uint param_3,_union_257 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uchar *ptr;
  char *__s;
  size_t sVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 uStack_80;
  char local_61;
  uchar *local_60;
  ASN1_TYPE local_58;
  long local_40;
  
  iVar3 = (param_4.asn1_string)->type;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_61 = '\0';
  if ((param_3 & 0x40) == 0) {
    iVar5 = 0;
LAB_005a327f:
    if ((param_3 & 0x80) == 0) {
      if ((param_3 & 0x20) == 0) {
        if (0x1d < iVar3 - 1U) {
LAB_005a33d0:
          if ((param_3 & 0x100) != 0) goto LAB_005a33d9;
          goto LAB_005a3291;
        }
        bVar1 = tag2nbyte[iVar3];
        if (bVar1 == 0xff) goto LAB_005a33d0;
        iVar3 = (int)(char)bVar1;
        if ((param_3 & 0x10) != 0) {
          iVar3 = 1;
          if (bVar1 != 0) {
            iVar3 = (int)(char)(bVar1 | 8);
          }
        }
      }
      else {
LAB_005a3291:
        iVar3 = (-(uint)((param_3 & 0x10) == 0) & 0xfffffff8) + 9;
      }
      iVar2 = do_buf((param_4.asn1_string)->data,(param_4.asn1_string)->length,iVar3,param_3 & 0x40f
                     ,&local_61,param_1,0);
      if (-1 < iVar2) {
        iVar5 = iVar5 + iVar2;
        if (local_61 == '\0') {
          if (param_2 == 0) goto LAB_005a3363;
        }
        else {
          iVar5 = iVar5 + 2;
          if (param_2 == 0) goto LAB_005a3363;
          uStack_80 = 0x5a330d;
          iVar2 = (*param_1)(param_2,"\"",1);
          if (iVar2 == 0) goto LAB_005a3520;
        }
        iVar3 = do_buf((param_4.asn1_string)->data,(param_4.asn1_string)->length,iVar3,
                       param_3 & 0x40f,0,param_1,param_2);
        if ((-1 < iVar3) &&
           ((local_61 == '\0' || (iVar3 = (*param_1)(param_2,"\"",1,uStack_80), iVar3 != 0))))
        goto LAB_005a3363;
      }
    }
    else {
LAB_005a33d9:
      iVar3 = (*param_1)(param_2,"#",1);
      if (iVar3 != 0) {
        if ((param_3 & 0x200) == 0) {
          iVar3 = do_hex_dump(param_1,param_2,(param_4.asn1_string)->data,
                              (param_4.asn1_string)->length);
joined_r0x005a3517:
          if (-1 < iVar3) {
            iVar5 = iVar5 + iVar3 + 1;
            goto LAB_005a3363;
          }
        }
        else {
          local_58.type = (param_4.asn1_string)->type;
          local_58.value = param_4;
          iVar3 = i2d_ASN1_TYPE(&local_58,(uchar **)0x0);
          if (0 < iVar3) {
            ptr = (uchar *)CRYPTO_malloc(iVar3,"../crypto/asn1/a_strex.c",0x11d);
            if (ptr != (uchar *)0x0) {
              local_60 = ptr;
              i2d_ASN1_TYPE(&local_58,&local_60);
              iVar3 = do_hex_dump(param_1,param_2,ptr,iVar3);
              CRYPTO_free(ptr);
              goto joined_r0x005a3517;
            }
            ERR_new();
            ERR_set_debug("../crypto/asn1/a_strex.c",0x11e,"do_dump");
            ERR_set_error(0xd,0xc0100,0);
          }
        }
      }
    }
  }
  else {
    __s = ASN1_tag2str(iVar3);
    sVar4 = strlen(__s);
    iVar5 = (*param_1)(param_2,__s,sVar4 & 0xffffffff);
    if (iVar5 != 0) {
      uStack_80 = 0x5a34db;
      iVar5 = (*param_1)(param_2,":",1);
      if (iVar5 != 0) {
        iVar5 = (int)sVar4 + 1;
        goto LAB_005a327f;
      }
    }
  }
LAB_005a3520:
  iVar5 = -1;
LAB_005a3363:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

