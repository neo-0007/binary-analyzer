
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__narrow_multibyte_chars(char const*, __locale_struct*) */

char std::__narrow_multibyte_chars(char *param_1,__locale_struct *param_2)

{
  char cVar1;
  int iVar2;
  char *__s1;
  iconv_t pvVar3;
  size_t sVar4;
  long in_FS_OFFSET;
  char local_62;
  char local_61;
  size_t local_60 [2];
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s1 = nl_langinfo_l(0xe,param_2);
  iVar2 = strcmp(__s1,"UTF-8");
  if (iVar2 == 0) {
    iVar2 = strcmp(param_1,&DAT_00813932);
    cVar1 = ' ';
    if (iVar2 == 0) goto LAB_0062a2f9;
    iVar2 = strcmp(param_1,&DAT_00813936);
    cVar1 = '\'';
    if ((iVar2 == 0) || (((*param_1 == -0x27 && (param_1[1] == -0x54)) && (param_1[2] == '\0'))))
    goto LAB_0062a2f9;
  }
  pvVar3 = iconv_open("ASCII//TRANSLIT",__s1);
  cVar1 = '\0';
  if (pvVar3 != (iconv_t)0xffffffffffffffff) {
    local_60[0] = strlen(param_1);
    local_60[1] = 1;
    local_50 = param_1;
    local_48 = &local_62;
    sVar4 = iconv(pvVar3,&local_50,local_60,&local_48,local_60 + 1);
    iconv_close(pvVar3);
    if ((sVar4 != 0xffffffffffffffff) &&
       (pvVar3 = iconv_open(__s1,"ASCII"), pvVar3 != (iconv_t)0xffffffffffffffff)) {
      local_60[0] = 1;
      local_48 = &local_61;
      local_60[1] = 1;
      local_50 = &local_62;
      sVar4 = iconv(pvVar3,&local_50,local_60,&local_48,local_60 + 1);
      iconv_close(pvVar3);
      cVar1 = local_61;
      if (sVar4 != 0xffffffffffffffff) goto LAB_0062a2f9;
    }
    cVar1 = '\0';
  }
LAB_0062a2f9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return cVar1;
}

