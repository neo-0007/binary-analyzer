
char __idna_name_classify(char *param_1)

{
  bool bVar1;
  char cVar2;
  size_t sVar3;
  size_t sVar4;
  char *__s;
  long in_FS_OFFSET;
  char local_59;
  wchar_t local_4c;
  mbstate_t local_48;
  long local_40;
  
  bVar1 = false;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48.__count = 0;
  local_48.__value = (_union_27)0x0;
  sVar3 = strlen(param_1);
  local_59 = '\0';
  __s = param_1;
  do {
    sVar4 = mbrtowc(&local_4c,__s,(size_t)(param_1 + ((sVar3 + 1) - (long)__s)),&local_48);
    if (sVar4 == 0) {
      cVar2 = local_59 + '\x01';
      if (!bVar1) {
        cVar2 = '\0';
      }
LAB_0076bf0f:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      return cVar2;
    }
    if (sVar4 == 0xfffffffffffffffe) {
      cVar2 = '\x03';
      goto LAB_0076bf0f;
    }
    if (sVar4 == 0xffffffffffffffff) {
      cVar2 = '\x03';
      if (*(int *)(in_FS_OFFSET + -0x58) != 0x54) {
        cVar2 = (*(int *)(in_FS_OFFSET + -0x58) != 0xc) + '\x04';
      }
      goto LAB_0076bf0f;
    }
    __s = __s + sVar4;
    if (local_4c == L'\\') {
      local_59 = '\x01';
    }
    else if (L'\x7f' < local_4c) {
      bVar1 = true;
    }
  } while( true );
}

