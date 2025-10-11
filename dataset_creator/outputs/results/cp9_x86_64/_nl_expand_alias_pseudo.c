
undefined8 _nl_expand_alias(char *param_1)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  
  LOCK();
  bVar11 = lock == 0;
  if (bVar11) {
    lock = 1;
  }
  UNLOCK();
  if (!bVar11) {
    __lll_lock_wait_private(&lock);
  }
  if (locale_alias_path_1 == (char *)0x0) {
    locale_alias_path_1 = "/usr/share/locale";
  }
  if (nmap != 0) goto LAB_006dc048;
  do {
    do {
      bVar11 = false;
      cVar4 = *locale_alias_path_1;
      pcVar2 = locale_alias_path_1;
      do {
        if (cVar4 == '\0') {
          if (bVar11) {
LAB_006dc0b0:
            locale_alias_path_1 = pcVar2;
          }
          uVar7 = 0;
          goto LAB_006dc0ba;
        }
        pcVar5 = pcVar2;
        if (cVar4 == ':') {
          do {
            pcVar2 = pcVar2 + 1;
          } while (*pcVar2 == ':');
          pcVar5 = pcVar2;
          if (*pcVar2 == '\0') goto LAB_006dc0b0;
        }
        do {
          pcVar2 = pcVar2 + 1;
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
        } while (cVar4 != ':');
        bVar11 = true;
      } while (pcVar2 <= pcVar5);
      locale_alias_path_1 = pcVar2;
      lVar3 = read_alias_file(pcVar5,(int)pcVar2 - (int)pcVar5);
    } while ((lVar3 == 0) || (nmap == 0));
LAB_006dc048:
    lVar3 = map;
    uVar9 = 0;
    uVar10 = nmap;
    do {
      uVar6 = uVar9 + uVar10 >> 1;
      puVar8 = (undefined8 *)(uVar6 * 0x10 + lVar3);
      iVar1 = strcasecmp_l(param_1,(char *)*puVar8,(__locale_t)_nl_C_locobj);
      if (-1 < iVar1) {
        if (iVar1 == 0) {
          uVar7 = puVar8[1];
LAB_006dc0ba:
          iVar1 = lock;
          LOCK();
          lock = 0;
          UNLOCK();
          if (1 < iVar1) {
            __lll_lock_wake_private(&lock);
          }
          return uVar7;
        }
        uVar9 = uVar6 + 1;
        uVar6 = uVar10;
      }
      uVar10 = uVar6;
    } while (uVar9 < uVar6);
  } while( true );
}

