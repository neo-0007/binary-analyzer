
int asn1_ex_i2c(ASN1_VALUE **pval,uchar *cont,int *putype,ASN1_ITEM *it)

{
  uint uVar1;
  code *pcVar2;
  ASN1_VALUE *pAVar3;
  uint uVar4;
  long lVar5;
  size_t __n;
  uchar **ppuVar6;
  undefined1 *__src;
  long in_FS_OFFSET;
  uchar *local_20;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = cont;
  if ((it->funcs != (void *)0x0) &&
     (pcVar2 = *(code **)((long)it->funcs + 0x30), pcVar2 != (code *)0x0)) {
    uVar4 = (*pcVar2)();
    goto LAB_004a2a60;
  }
  if (it->itype == '\0') {
    lVar5 = it->utype;
    if (lVar5 == 1) {
LAB_004a2ada:
      uVar4 = *putype;
      if (uVar4 < 0xb) goto LAB_004a2aa8;
      goto switchD_004a2ab9_caseD_4a2ae3;
    }
    if (*pval != (ASN1_VALUE *)0x0) goto LAB_004a2ad4;
  }
  else if (*pval != (ASN1_VALUE *)0x0) {
    if (it->itype == '\x05') {
      uVar4 = *(uint *)(*pval + 4);
      *putype = uVar4;
    }
    else {
      lVar5 = it->utype;
LAB_004a2ad4:
      if (lVar5 != -4) goto LAB_004a2ada;
      uVar4 = *(uint *)*pval;
      pval = (ASN1_VALUE **)(*pval + 8);
      *putype = uVar4;
    }
    if (uVar4 < 0xb) {
LAB_004a2aa8:
      switch((long)&switchD_004a2ab9::switchdataD_007ddb20 +
             (long)(int)(&switchD_004a2ab9::switchdataD_007ddb20)[uVar4]) {
      case 0x4a2ae3:
        goto switchD_004a2ab9_caseD_4a2ae3;
      case 0x4a2b38:
        ppuVar6 = (uchar **)cont;
        if (cont != (uchar *)0x0) {
          ppuVar6 = &local_20;
        }
        uVar4 = ossl_i2c_ASN1_INTEGER(*pval,ppuVar6);
        break;
      case 0x4a2b60:
        uVar1 = *(uint *)pval;
        if (uVar1 == 0xffffffff) goto LAB_004a2b7f;
        if (it->utype != -4) {
          if (uVar1 == 0) {
            if (it->size != 0) goto LAB_004a2bf5;
          }
          else if (it->size < 1) goto LAB_004a2bf5;
          goto LAB_004a2b7f;
        }
LAB_004a2bf5:
        local_11 = (undefined1)uVar1;
        __n = 1;
        __src = &local_11;
        if (cont == (uchar *)0x0) break;
        goto LAB_004a2c11;
      case 0x4a2b90:
        __src = *(undefined1 **)(*pval + 0x18);
        uVar4 = *(uint *)(*pval + 0x14);
        if ((__src == (undefined1 *)0x0) || (uVar4 == 0)) goto LAB_004a2b7f;
        if (cont == (uchar *)0x0) break;
        goto LAB_004a2b12;
      case 0x4a2bc0:
        ppuVar6 = (uchar **)cont;
        if (cont != (uchar *)0x0) {
          ppuVar6 = &local_20;
        }
        uVar4 = ossl_i2c_ASN1_BIT_STRING(*pval,ppuVar6);
        break;
      case 0x4a2be8:
        uVar4 = 0;
      }
    }
    else {
switchD_004a2ab9_caseD_4a2ae3:
      pAVar3 = *pval;
      if ((it->size == 0x800) && (((byte)pAVar3[0x10] & 0x10) != 0)) {
        if (cont == (uchar *)0x0) {
          uVar4 = 0xfffffffe;
        }
        else {
          *(uchar **)(pAVar3 + 8) = cont;
          uVar4 = 0xfffffffe;
          *(uint *)pAVar3 = 0;
        }
        goto LAB_004a2a60;
      }
      uVar4 = *(uint *)pAVar3;
      if ((cont == (uchar *)0x0) || (uVar4 == 0)) goto LAB_004a2a60;
      __src = *(undefined1 **)(pAVar3 + 8);
LAB_004a2b12:
      __n = (size_t)(int)uVar4;
LAB_004a2c11:
      memcpy(cont,__src,__n);
    }
    goto LAB_004a2a60;
  }
LAB_004a2b7f:
  uVar4 = 0xffffffff;
LAB_004a2a60:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

