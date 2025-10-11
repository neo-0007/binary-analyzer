
undefined8 nc_email_eai_isra_0(int *param_1,int param_2,void *param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  char *ptr;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  size_t sVar10;
  char *pcVar11;
  undefined8 uVar12;
  long in_FS_OFFSET;
  byte bVar13;
  long local_150;
  char local_148;
  undefined1 local_147 [263];
  long local_40;
  
  bVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_150 = 0xff;
  if (0 < param_2) {
    uVar12 = 0x35;
    pvVar4 = memchr(param_3,0,(long)param_2);
    if (pvVar4 != (void *)0x0) goto LAB_0060c6d0;
  }
  ptr = (char *)CRYPTO_strndup(param_3,(long)param_2,"../crypto/x509/v3_ncons.c",0x28c);
  if (ptr == (char *)0x0) {
    uVar12 = 0x11;
    goto LAB_0060c6d0;
  }
  uVar12 = 0x35;
  if (*param_1 == 0xc) {
    piVar1 = *(int **)(param_1 + 2);
    iVar3 = *piVar1;
    uVar9 = (ulong)iVar3;
    lVar2 = *(long *)(piVar1 + 2);
    if (iVar3 < 1) {
      if (iVar3 != 0) {
        pcVar5 = (char *)(lVar2 + -1 + uVar9);
LAB_0060c645:
        pcVar11 = &local_148;
        for (lVar7 = 0x20; lVar7 != 0; lVar7 = lVar7 + -1) {
          pcVar11[0] = '\0';
          pcVar11[1] = '\0';
          pcVar11[2] = '\0';
          pcVar11[3] = '\0';
          pcVar11[4] = '\0';
          pcVar11[5] = '\0';
          pcVar11[6] = '\0';
          pcVar11[7] = '\0';
          pcVar11 = pcVar11 + (ulong)bVar13 * -0x10 + 8;
        }
        if (*ptr == '.') {
          local_150 = local_150 + -1;
          local_148 = '.';
          iVar3 = ossl_a2ulabel(ptr,local_147,&local_150);
          if (iVar3 < 1) goto LAB_0060c790;
          iVar3 = *piVar1;
          sVar6 = strlen(&local_148);
          if (sVar6 < (ulong)(long)iVar3) {
            iVar3 = ia5ncasecmp(&local_148,lVar2 + ((long)iVar3 - sVar6));
            goto joined_r0x0060c748;
          }
        }
        else {
          iVar3 = ossl_a2ulabel(ptr,&local_148,&local_150);
          if (iVar3 < 1) {
LAB_0060c790:
            uVar12 = 1;
            goto LAB_0060c6c0;
          }
          sVar10 = (long)*piVar1 - ((long)(pcVar5 + 1) - *(long *)(piVar1 + 2));
          sVar6 = strlen(&local_148);
          if (sVar10 == sVar6) {
            iVar3 = ia5ncasecmp(&local_148,pcVar5 + 1,sVar10);
joined_r0x0060c748:
            if (iVar3 == 0) {
              uVar12 = 0;
              goto LAB_0060c6c0;
            }
          }
        }
        uVar12 = 0x2f;
      }
    }
    else {
      pcVar5 = (char *)(lVar2 + -1 + (long)iVar3);
      do {
        if (*pcVar5 == '@') goto LAB_0060c645;
        pcVar5 = pcVar5 + -1;
        uVar8 = (int)uVar9 - 1;
        uVar9 = (ulong)uVar8;
      } while (uVar8 != 0);
      uVar12 = 0x35;
    }
  }
LAB_0060c6c0:
  CRYPTO_free(ptr);
LAB_0060c6d0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar12;
}

