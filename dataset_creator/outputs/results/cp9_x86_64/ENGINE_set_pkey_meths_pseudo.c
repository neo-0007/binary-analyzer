
int ENGINE_set_pkey_meths(ENGINE *e,ENGINE_PKEY_METHS_PTR f)

{
  *(ENGINE_PKEY_METHS_PTR *)(e + 0x48) = f;
  return 1;
}

