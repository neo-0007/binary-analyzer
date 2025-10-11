
void FUN_0078da10(undefined8 param_1,char *param_2,char *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  undefined1 local_428 [1032];
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar1 = &DAT_0083e5c2;
  pcVar2 = "";
  if ((int)param_1 != 0) {
    puVar1 = (undefined1 *)FUN_00712950(param_1,local_428,0x400,param_4,param_5,param_4);
    pcVar2 = ": ";
  }
  pcVar4 = ": ";
  if (*param_2 == '\0') {
    pcVar4 = "";
  }
  if (param_3 == (char *)0x0) {
    param_3 = "error while loading shared libraries";
  }
  pcVar3 = *(char **)PTR_PTR_0093adf8;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "<program name unknown>";
  }
                    /* WARNING: Subroutine does not return */
  FUN_007873c0("%s: %s: %s%s%s%s%s\n",pcVar3,param_3,param_2,pcVar4,param_4,pcVar2,puVar1);
}

