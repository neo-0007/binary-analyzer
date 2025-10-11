
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong ERR_get_error(void)

{
  ulong uVar1;
  
  uVar1 = get_error_values(0,0,0,0,0,0);
  return uVar1;
}

