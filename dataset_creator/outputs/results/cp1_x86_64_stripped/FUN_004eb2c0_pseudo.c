
char * FUN_004eb2c0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "uncompressed";
  if (((param_1 != 4) && (pcVar1 = "compressed", param_1 != 2)) && (pcVar1 = "hybrid", param_1 != 6)
     ) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

