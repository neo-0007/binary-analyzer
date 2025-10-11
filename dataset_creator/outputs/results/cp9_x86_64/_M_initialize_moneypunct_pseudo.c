
/* std::moneypunct<wchar_t, false>::_M_initialize_moneypunct(__locale_struct*, char const*) */

void std::moneypunct<wchar_t,false>::_M_initialize_moneypunct
               (__locale_struct *param_1,char *param_2)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  undefined4 uVar5;
  __locale_t __dataset;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  long lVar9;
  void *__dest;
  __locale_data *p_Var10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  ulong uVar13;
  undefined8 in_R9;
  long in_FS_OFFSET;
  char cVar14;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1->__locales[2] == (__locale_data *)0x0) {
    p_Var10 = (__locale_data *)operator_new(0xa0);
    *(undefined4 *)(p_Var10 + 8) = 0;
    *(undefined8 *)(p_Var10 + 0x10) = 0;
    *(undefined ***)p_Var10 = &PTR____moneypunct_cache_00927658;
    *(undefined8 *)(p_Var10 + 0x18) = 0;
    p_Var10[0x20] = (__locale_data)0x0;
    *(undefined8 *)(p_Var10 + 0x24) = 0;
    *(undefined8 *)(p_Var10 + 0x30) = 0;
    *(undefined8 *)(p_Var10 + 0x38) = 0;
    *(undefined8 *)(p_Var10 + 0x40) = 0;
    *(undefined8 *)(p_Var10 + 0x48) = 0;
    *(undefined8 *)(p_Var10 + 0x50) = 0;
    *(undefined8 *)(p_Var10 + 0x58) = 0;
    *(undefined8 *)(p_Var10 + 0x60) = 0;
    *(undefined4 *)(p_Var10 + 0x68) = 0;
    p_Var10[0x98] = (__locale_data)0x0;
    param_1->__locales[2] = p_Var10;
  }
  if (param_2 == (char *)0x0) {
    p_Var10 = param_1->__locales[2];
    *(undefined **)(p_Var10 + 0x30) = &DAT_00813874;
    *(undefined **)(p_Var10 + 0x40) = &DAT_00813874;
    *(undefined **)(p_Var10 + 0x50) = &DAT_00813874;
    *(undefined8 *)(p_Var10 + 0x24) = 0x2c0000002e;
    uVar5 = money_base::_S_default_pattern;
    *(undefined1 **)(p_Var10 + 0x10) = &DAT_008343a2;
    *(undefined8 *)(p_Var10 + 0x18) = 0;
    *(undefined4 *)(p_Var10 + 100) = uVar5;
    p_Var10[0x20] = (__locale_data)0x0;
    *(undefined8 *)(p_Var10 + 0x38) = 0;
    *(undefined8 *)(p_Var10 + 0x48) = 0;
    *(undefined8 *)(p_Var10 + 0x58) = 0;
    *(undefined4 *)(p_Var10 + 0x60) = 0;
    *(undefined4 *)(param_1->__locales[2] + 0x68) = uVar5;
    puVar4 = money_base::_S_atoms;
    p_Var10 = param_1->__locales[2];
    lVar9 = 0;
    do {
      *(int *)(p_Var10 + lVar9 * 4 + 0x6c) = (int)(char)puVar4[lVar9];
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0xb);
    goto LAB_00629511;
  }
  __dataset = uselocale((__locale_t)param_2);
  pcVar6 = nl_langinfo_l(0x4002b,(__locale_t)param_2);
  *(int *)(param_1->__locales[2] + 0x24) = (int)pcVar6;
  pcVar6 = nl_langinfo_l(0x4002c,(__locale_t)param_2);
  p_Var10 = param_1->__locales[2];
  *(int *)(p_Var10 + 0x28) = (int)pcVar6;
  if (*(int *)(p_Var10 + 0x24) == 0) {
    *(undefined4 *)(p_Var10 + 0x60) = 0;
    *(undefined4 *)(p_Var10 + 0x24) = 0x2e;
  }
  else {
    pcVar6 = nl_langinfo_l(0x40008,(__locale_t)param_2);
    *(int *)(param_1->__locales[2] + 0x60) = (int)*pcVar6;
  }
  pcVar6 = nl_langinfo_l(0x40004,(__locale_t)param_2);
  local_60 = nl_langinfo_l(0x40005,(__locale_t)param_2);
  local_58 = nl_langinfo_l(0x40006,(__locale_t)param_2);
  local_50 = nl_langinfo_l(0x40001,(__locale_t)param_2);
  pcVar7 = nl_langinfo_l(0x4000e,(__locale_t)param_2);
  p_Var10 = param_1->__locales[2];
  cVar2 = *pcVar7;
  if (*(int *)(p_Var10 + 0x28) == 0) {
    p_Var10[0x20] = (__locale_data)0x0;
    *(undefined1 **)(p_Var10 + 0x10) = &DAT_008343a2;
    *(undefined8 *)(p_Var10 + 0x18) = 0;
    *(undefined4 *)(p_Var10 + 0x28) = 0x2c;
    sVar8 = strlen(local_60);
    if (sVar8 != 0) goto LAB_00629654;
LAB_00629414:
    pwVar11 = L"";
    *(undefined **)(p_Var10 + 0x40) = &DAT_00813874;
  }
  else {
    sVar8 = strlen(pcVar6);
    if (sVar8 == 0) {
      p_Var10[0x20] = (__locale_data)0x0;
      *(undefined1 **)(p_Var10 + 0x10) = &DAT_008343a2;
    }
    else {
      uVar1 = sVar8 + 1;
                    /* try { // try from 006296e7 to 006296eb has its CatchHandler @ 0062989b */
      __dest = operator_new__(uVar1);
      memcpy(__dest,pcVar6,uVar1);
      p_Var10 = param_1->__locales[2];
      *(void **)(p_Var10 + 0x10) = __dest;
    }
    *(size_t *)(p_Var10 + 0x18) = sVar8;
    sVar8 = strlen(local_60);
    if (sVar8 == 0) goto LAB_00629414;
LAB_00629654:
    local_48 = 0;
    uVar1 = sVar8 + 1;
    uVar13 = uVar1 * 4;
    if (0x1ffffffffffffffe < uVar1) {
      uVar13 = 0xffffffffffffffff;
    }
                    /* try { // try from 00629681 to 00629685 has its CatchHandler @ 00629877 */
    pwVar11 = (wchar_t *)operator_new__(uVar13);
    __mbsrtowcs_chk(pwVar11,&local_60,uVar1,&local_48,0x3fffffffffffffff);
    p_Var10 = param_1->__locales[2];
    *(wchar_t **)(p_Var10 + 0x40) = pwVar11;
  }
  sVar8 = wcslen(pwVar11);
  *(size_t *)(p_Var10 + 0x48) = sVar8;
  sVar8 = strlen(local_58);
  if (cVar2 == '\0') {
    pwVar12 = L"()";
    *(undefined **)(p_Var10 + 0x50) = &DAT_0081386c;
    pwVar11 = (wchar_t *)0x0;
  }
  else if (sVar8 == 0) {
    pwVar12 = L"";
    *(undefined **)(p_Var10 + 0x50) = &DAT_00813874;
    pwVar11 = (wchar_t *)0x0;
  }
  else {
    local_48 = 0;
    uVar1 = sVar8 + 1;
    uVar13 = uVar1 * 4;
    if (0x1ffffffffffffffe < uVar1) {
      uVar13 = 0xffffffffffffffff;
    }
                    /* try { // try from 0062973d to 00629741 has its CatchHandler @ 0062988f */
    pwVar12 = (wchar_t *)operator_new__(uVar13);
    __mbsrtowcs_chk(pwVar12,&local_58,uVar1,&local_48,0x3fffffffffffffff);
    p_Var10 = param_1->__locales[2];
    *(wchar_t **)(p_Var10 + 0x50) = pwVar12;
    pwVar11 = pwVar12;
  }
  sVar8 = wcslen(pwVar12);
  *(size_t *)(p_Var10 + 0x58) = sVar8;
  sVar8 = strlen(local_50);
  if (sVar8 == 0) {
    pwVar12 = L"";
    *(undefined **)(p_Var10 + 0x30) = &DAT_00813874;
  }
  else {
    local_48 = 0;
    uVar1 = sVar8 + 1;
    uVar13 = uVar1 * 4;
    if (0x1ffffffffffffffe < uVar1) {
      uVar13 = 0xffffffffffffffff;
    }
                    /* try { // try from 006297ad to 006297b1 has its CatchHandler @ 00629883 */
    pwVar12 = (wchar_t *)operator_new__(uVar13);
    __mbsrtowcs_chk(pwVar12,&local_50,uVar1,&local_48,0x3fffffffffffffff,in_R9,pwVar11);
    p_Var10 = param_1->__locales[2];
    *(wchar_t **)(p_Var10 + 0x30) = pwVar12;
  }
  sVar8 = wcslen(pwVar12);
  *(size_t *)(p_Var10 + 0x38) = sVar8;
  pcVar6 = nl_langinfo_l(0x40009,(__locale_t)param_2);
  cVar14 = *pcVar6;
  pcVar6 = nl_langinfo_l(0x4000a,(__locale_t)param_2);
  cVar3 = *pcVar6;
  pcVar6 = nl_langinfo_l(0x4000d,(__locale_t)param_2);
  p_Var10 = param_1->__locales[2];
  uVar5 = money_base::_S_construct_pattern(cVar14,cVar3,*pcVar6);
  *(undefined4 *)(p_Var10 + 100) = uVar5;
  pcVar6 = nl_langinfo_l(0x4000b,(__locale_t)param_2);
  cVar14 = *pcVar6;
  pcVar6 = nl_langinfo_l(0x4000c,(__locale_t)param_2);
  p_Var10 = param_1->__locales[2];
  uVar5 = money_base::_S_construct_pattern(cVar14,*pcVar6,cVar2);
  *(undefined4 *)(p_Var10 + 0x68) = uVar5;
  uselocale(__dataset);
LAB_00629511:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

