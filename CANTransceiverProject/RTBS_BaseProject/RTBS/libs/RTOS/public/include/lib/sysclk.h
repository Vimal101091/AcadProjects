#ifndef __SYSCLK__H__
#define __SYSCLK__H__

#include <kernel/kernel.h>
#include <config/node.h>
#include <lib/pmm.h>

/**	Initializes the unified clock system (UCS) to provide the various internal MCU clocks.
 * 	All four MCU clocks will be derived from the internal DCOCLK, and the DCOCLK itself will
 * 	be generated by the FLL module within the UCS (using the external XT2 crystal quartz).
 *
 * 	Since the DCOCLK cannot be set to arbitrary values, a frequency as close as possible will be
 * 	activated.
 *
 *	@param fDCOCLK		the desired frequency of the internal DCO clock in Hz (0 for unchanged).
 *
 *	@param divMCLK		the divider for the MCLK
 *						(suppported values: 0..5 maps to 1,2,4,8,16,32, 0xFF for unchanged)
 *
 *	@param divSMCLK		the divider for the SMCLK
 *						(suppported values: 0..5 maps to 1,2,4,8,16,32, 0xFF for unchanged)
 *
 *	@param divACLK		the divider for the ACLK
 *						(suppported values: 0..5 maps to 1,2,4,8,16,32, 0xFF for unchanged)
 *
 *	@param divACLKN		the divider for the ACLK/n
 *						(suppported values: 0..5 maps to 1,2,4,8,16,32, 0xFF for unchanged)
 *
 *	@return SUCCESS or FAILURE
 *
 */
extern Result_t sysclk_setClocks(uint32_t fDCOCLK, uint8_t divMCLK,
		uint8_t divSMCLK, uint8_t divACLK, uint8_t divACLKN);

/** @return the currently active DCOCLK frequency in Hz. */
extern uint32_t sysclk_getDCOCLK();

/** @return the currently active MCLK frequency in Hz. */
extern uint32_t sysclk_getMCLK();

/** @return the currently active SMCLK frequency in Hz. */
extern uint32_t sysclk_getSMCLK();

/** @return the currently active ACLK frequency in Hz. */
extern uint32_t sysclk_getACLK();

/** @return the currently active ACLK/n frequency in Hz. */
extern uint32_t sysclk_getACLKN();

#endif