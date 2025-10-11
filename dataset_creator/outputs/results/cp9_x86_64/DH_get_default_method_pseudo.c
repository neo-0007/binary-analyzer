
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DH_METHOD * DH_get_default_method(void)

{
  return (DH_METHOD *)default_DH_method;
}

