
void fatal_error(int param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  char local_428 [1032];
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pcVar1 = "";
  pcVar2 = "";
  if (param_1 != 0) {
    pcVar1 = strerror_r(param_1,local_428,0x400);
    pcVar2 = ": ";
  }
  pcVar4 = ": ";
  if (*param_2 == '\0') {
    pcVar4 = "";
  }
  if (param_3 == (char *)0x0) {
    param_3 = "error while loading shared libraries";
  }
  pcVar3 = *(char **)_dl_argv;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "<program name unknown>";
  }
                    /* WARNING: Subroutine does not return */
  _dl_fatal_printf("%s: %s: %s%s%s%s%s\n",pcVar3,param_3,param_2,pcVar4,param_4,pcVar2,pcVar1);
}

