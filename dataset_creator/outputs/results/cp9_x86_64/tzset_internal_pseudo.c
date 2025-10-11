
void tzset_internal(uint param_1)

{
  char *__ptr;
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  if ((is_initialized_0 == 0) || ((param_1 & 1) != 0)) {
    is_initialized_0 = 1;
    pcVar2 = getenv("TZ");
    __ptr = old_tz;
    if (pcVar2 == (char *)0x0) {
      tz_rules = (undefined *)0x0;
      DAT_0093da90 = (undefined *)0x0;
      free(old_tz);
      old_tz = strdup("/etc/localtime");
      __tzfile_read("/etc/localtime",0,0);
      if (__use_tzfile != 0) {
        return;
      }
    }
    else {
      if (*pcVar2 == '\0') {
        pcVar2 = "Universal";
      }
      else {
        pcVar2 = pcVar2 + (*pcVar2 == ':');
      }
      if ((old_tz != (char *)0x0) && (iVar1 = strcmp(pcVar2,old_tz), iVar1 == 0)) {
        return;
      }
      tz_rules = (undefined *)0x0;
      DAT_0093da90 = (undefined *)0x0;
      free(__ptr);
      old_tz = strdup(pcVar2);
      __tzfile_read(pcVar2,0,0);
      if (__use_tzfile != 0) {
        return;
      }
      if ((*pcVar2 != '\0') && (iVar1 = strcmp(pcVar2,"/etc/localtime"), iVar1 != 0)) {
        __tzset_parse_tz(pcVar2);
        return;
      }
    }
    tz_rules = &DAT_0081203d;
    puVar4 = (undefined8 *)&DAT_0093da68;
    for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
    }
    DAT_0093da90 = &DAT_0081203d;
    DAT_0093dab0 = 0xffffffffffffffff;
    DAT_0093da80 = 0xffffffffffffffff;
    daylight = 0;
    timezone = 0;
    tzname = &DAT_0081203d;
    PTR_DAT_00931a28 = &DAT_0081203d;
  }
  return;
}

