
void ERR_add_error_txt(char *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  size_t sVar5;
  size_t sVar6;
  char *pcVar7;
  void *pvVar8;
  uint uVar9;
  ulong uVar10;
  char *__haystack;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  char *local_b0;
  undefined4 local_60;
  byte local_5c [4];
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = 0;
  local_48 = (char *)0x0;
  uVar4 = ERR_peek_last_error();
  if (param_1 == (char *)0x0) {
    param_1 = "";
  }
  if (uVar4 == 0) {
    ERR_new();
    ERR_set_debug(&DAT_008343a2,0,0);
    ERR_set_error(1,0,0);
  }
  uVar9 = 2;
  if ((uVar4 & 0x80000000) == 0) {
    uVar9 = (uint)(uVar4 >> 0x17) & 0xff;
  }
LAB_005f225a:
  do {
    ERR_peek_last_error_all(&local_58,&local_60,&local_50,&local_48,local_5c);
    if ((local_5c[0] & 2) != 0) {
      sVar6 = strlen(local_48);
      local_b0 = param_1;
      if (sVar6 < 0xf9c) {
        uVar10 = 0xf9c - sVar6;
        goto LAB_005f21e9;
      }
      uVar11 = 0;
      if (*param_1 != '\0') goto LAB_005f22af;
LAB_005f2214:
      __haystack = param_2 + uVar11;
      sVar6 = strlen(param_2);
      pcVar7 = param_2 + sVar6;
      if (uVar11 < sVar6) goto LAB_005f23d0;
LAB_005f222f:
      __haystack = pcVar7;
      ERR_add_error_data(2,local_b0,param_2);
      goto LAB_005f2250;
    }
    uVar10 = 0xf9c;
    sVar6 = 0;
    local_48 = "";
    local_b0 = "";
LAB_005f21e9:
    sVar5 = strlen(param_1);
    uVar11 = 0xf9b - (sVar6 + sVar5);
    if (uVar10 <= sVar5) {
      uVar11 = 0;
    }
    if (*param_1 == '\0') goto LAB_005f2214;
LAB_005f22af:
    bVar12 = false;
    pcVar7 = param_2;
    if (*param_2 == '\0') goto LAB_005f222f;
    do {
      __haystack = pcVar7;
      pcVar7 = strstr(__haystack,param_1);
      if (pcVar7 == (char *)0x0) {
        sVar6 = strlen(__haystack);
        pcVar7 = __haystack + sVar6;
        uVar10 = (long)pcVar7 - (long)param_2;
LAB_005f231c:
        if (uVar10 <= uVar11) {
          if (!bVar12) goto LAB_005f222f;
          sVar6 = strlen(param_1);
          pvVar8 = (void *)CRYPTO_strndup(param_2,pcVar7 + (-(long)param_2 - sVar6),
                                          "../crypto/err/err_prn.c",0x85);
          if (pvVar8 == (void *)0x0) goto LAB_005f23a0;
          ERR_add_error_data(2,local_b0,pvVar8);
          CRYPTO_free(pvVar8);
          param_2 = pcVar7;
          if (*pcVar7 == '\0') goto LAB_005f23a0;
          goto LAB_005f225a;
        }
        break;
      }
      sVar6 = strlen(param_1);
      pcVar7 = pcVar7 + sVar6;
      bVar12 = *pcVar7 == '\0';
      uVar10 = (long)pcVar7 - (long)param_2;
      if (*pcVar7 == '\0') goto LAB_005f231c;
    } while (uVar10 <= uVar11);
LAB_005f23d0:
    if (param_2 != __haystack) {
      pvVar8 = (void *)CRYPTO_strndup(param_2,(long)__haystack - (long)param_2,
                                      "../crypto/err/err_prn.c",0x7b);
      if (pvVar8 == (void *)0x0) break;
      ERR_add_error_data(2,param_1,pvVar8);
      CRYPTO_free(pvVar8);
    }
    uVar3 = local_50;
    uVar2 = local_58;
    uVar1 = local_60;
    ERR_new();
    ERR_set_debug(uVar2,uVar1,uVar3);
    ERR_set_error(uVar9,uVar4 & 0xffffffff,0);
LAB_005f2250:
    param_2 = __haystack;
  } while (*__haystack != '\0');
LAB_005f23a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

