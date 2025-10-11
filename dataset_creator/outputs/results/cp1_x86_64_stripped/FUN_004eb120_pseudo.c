
char * FUN_004eb120(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "default";
  if (((param_1 != 0) && (pcVar1 = "named", param_1 != 0x2000)) &&
     (pcVar1 = "named-nist", param_1 != 0x4000)) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

