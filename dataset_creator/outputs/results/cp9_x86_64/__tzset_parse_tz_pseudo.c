
void __tzset_parse_tz(char *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  char *local_10;
  
  puVar3 = (undefined8 *)&DAT_0093da68;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_0093da90 = &DAT_008343a2;
  tz_rules = &DAT_008343a2;
  local_10 = param_1;
  cVar1 = parse_tzname(&local_10);
  if ((cVar1 != '\0') && (cVar1 = parse_offset(&local_10), cVar1 != '\0')) {
    if (*local_10 == '\0') {
      DAT_0093da90 = tz_rules;
      DAT_0093daa8 = DAT_0093da78;
      daylight = 0;
      goto LAB_00757a5a;
    }
    cVar1 = parse_tzname(&local_10,1);
    if (cVar1 != '\0') {
      parse_offset(&local_10,1);
      if (((*local_10 == '\0') || ((*local_10 == ',' && (local_10[1] == '\0')))) &&
         (__tzfile_default(tz_rules,DAT_0093da90,DAT_0093da78,DAT_0093daa8), __use_tzfile != 0)) {
        free(old_tz);
        old_tz = (void *)0x0;
        return;
      }
    }
    cVar1 = parse_rule(&local_10,0);
    if (cVar1 != '\0') {
      parse_rule(&local_10,1);
    }
  }
  daylight = (uint)(DAT_0093daa8 != DAT_0093da78);
LAB_00757a5a:
  timezone = (long)-DAT_0093da78;
  PTR_DAT_00931a28 = DAT_0093da90;
  tzname = tz_rules;
  return;
}

