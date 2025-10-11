
char * strerror_l(int __errnum,__locale_t __l)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  __locale_t p_Var4;
  char *pcVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  
  uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  lVar3 = __get_errlist();
  if (lVar3 == 0) {
    lVar3 = *(long *)(in_FS_OFFSET + 0x10);
    free(*(void **)(lVar3 + 0x980));
    p_Var4 = uselocale(__l);
    uVar6 = dcgettext(&_libc_intl_domainname,"Unknown error ",5);
    uselocale(p_Var4);
    iVar2 = asprintf((char **)(lVar3 + 0x980),"%s%d",uVar6,(ulong)(uint)__errnum);
    if (iVar2 == -1) {
      *(undefined8 *)(lVar3 + 0x980) = 0;
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar5 = *(char **)(lVar3 + 0x980);
    }
  }
  else {
    p_Var4 = uselocale(__l);
    pcVar5 = (char *)dcgettext(&_libc_intl_domainname,lVar3,5);
    uselocale(p_Var4);
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
  return pcVar5;
}

