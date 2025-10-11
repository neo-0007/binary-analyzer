
/* WARNING: Removing unreachable block (ram,0x007650c0) */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int getrlimit64(__rlimit_resource_t __resource,rlimit *__rlimits)

{
  syscall();
  return 0x12e;
}

