.PHONY: clean All

All:
	@echo "----------Building project:[ IncrementAndDecrement - Debug ]----------"
	@cd "IncrementAndDecrement" && "$(MAKE)" -f  "IncrementAndDecrement.mk"
clean:
	@echo "----------Cleaning project:[ IncrementAndDecrement - Debug ]----------"
	@cd "IncrementAndDecrement" && "$(MAKE)" -f  "IncrementAndDecrement.mk" clean
