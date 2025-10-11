
void ERR_add_error_vdata(int num,va_list args)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  size_t sVar5;
  char *__s;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  char *__s_00;
  char *addr;
  bool bVar9;
  int local_3c;
  
  lVar4 = ossl_err_get_state_int();
  if (lVar4 != 0) {
    lVar1 = (long)*(int *)(lVar4 + 0x380) + 0x80;
    if ((*(uint *)(lVar4 + lVar1 * 4) & 3) == 3) {
      lVar2 = lVar4 + (long)*(int *)(lVar4 + 0x380) * 8;
      local_3c = *(int *)(lVar2 + 0x180);
      __s = *(char **)(lVar2 + 0x100);
      *(undefined8 *)(lVar2 + 0x100) = 0;
      *(undefined4 *)(lVar4 + lVar1 * 4) = 0;
    }
    else {
      __s = (char *)CRYPTO_malloc(0x51,"../crypto/err/err.c",0x334);
      if (__s == (char *)0x0) {
        return;
      }
      *__s = '\0';
      local_3c = 0x51;
    }
    sVar5 = strlen(__s);
    uVar7 = sVar5 & 0xffffffff;
    iVar8 = num + -1;
    addr = __s;
    if (iVar8 < 0) {
      lVar4 = (long)local_3c;
    }
    else {
      do {
                    /* WARNING: Load size is inaccurate */
        uVar6 = *args;
        if (uVar6 < 0x30) {
          *(uint *)args = uVar6 + 8;
          __s_00 = *(char **)((ulong)uVar6 + *(long *)((long)args + 0x10));
          if (__s_00 == (char *)0x0) goto LAB_00510ef5;
LAB_00510e86:
          sVar5 = strlen(__s_00);
          uVar6 = (int)uVar7 + (int)sVar5;
        }
        else {
          plVar3 = *(long **)((long)args + 8);
          *(long **)((long)args + 8) = plVar3 + 1;
          __s_00 = (char *)*plVar3;
          if (__s_00 != (char *)0x0) goto LAB_00510e86;
LAB_00510ef5:
          __s_00 = "<NULL>";
          uVar6 = (int)uVar7 + 6;
        }
        uVar7 = (ulong)uVar6;
        __s = addr;
        if (local_3c <= (int)uVar6) {
          local_3c = uVar6 + 0x14;
          __s = (char *)CRYPTO_realloc(addr,local_3c,"../crypto/err/err.c",0x344);
          if (__s == (char *)0x0) goto LAB_00510f75;
        }
        lVar4 = (long)local_3c;
        OPENSSL_strlcat(__s,__s_00,lVar4);
        bVar9 = iVar8 != 0;
        iVar8 = iVar8 + -1;
        addr = __s;
      } while (bVar9);
    }
    iVar8 = err_set_error_data_int(__s,lVar4,3,0);
    addr = __s;
    if (iVar8 == 0) {
LAB_00510f75:
      CRYPTO_free(addr);
      return;
    }
  }
  return;
}

